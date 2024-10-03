#include<stdlib.h>
#include<stdio.h>
#define MAX 100

int heap[MAX];
int size = 0;

int parent(int i){
    return (i-1) / 2;
}

int leftChild(int i){
    return 2*i + 1;
}

int rightChild(int i){
    return 2*i + 2;
}

void heapify(int idx){
    if (idx == 0) return; // Base case to stop recursion

    if(heap[parent(idx)] < heap[idx]){
        int temp = heap[parent(idx)];
        heap[parent(idx)] = heap[idx];
        heap[idx] = temp;
    }

    heapify(parent(idx));
}

void insert(int val){
    size++;
    heap[size-1] = val;
    heapify(size-1);
}


void printHeap(){
    for(int i=0; i<size; i++){
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main(){
    insert(10);
    insert(20);
    insert(5);
    insert(30);
    insert(15);

    // Display heap
    printf("Max-Heap after insertions:\n");
    printHeap();

    return 0;
}
