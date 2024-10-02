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

void heapifydown(int idx){
    int left = leftChild(idx);
    int right = rightChild(idx);

    int largest = idx;

    if(left < size && heap[left] > heap[largest]){
        largest = left;
    }
    if(left > size && heap[right] > heap[largest]){
        largest = right;
    }
    if(largest != idx){
        int temp = heap[largest];
        heap[largest] = heap[idx];
        heap[idx] = temp;
        heapifydown(largest);
    }
}

int findIndex(int num){
    for(int i=0; i<size; i++){
        if(heap[i] == num){
            return i;
        }
    }
    return -1;
}

int deleteElement(int num){
    int idx = findIndex(num);
    if(idx == -1){
        printf("Element not found.");
        return -1;
    }

    int deleteElement = heap[idx];
    heap[idx] = heap[size-1];
    size--;
}

int deleteRoot(){
    if(size <= 0)   return -1;
    
    int root = heap[0];
    heap[0] = heap[size-1];

    size--;
    
    heapifydown(0);
    return root;
}

void getMax(){
    printf("Max element: %d\n", heap[0]);
}

void printHeap(){
    for(int i=0; i<size; i++){
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main(){

    heap[0] = 10;
    heap[1] = 20;
    heap[2] = 5;
    heap[3] = 30;
    heap[4] = 15;
    size = 5;


    printf("Initial heap: ");
    printHeap();

    int num;
    printf("Enter element to delete: ");
    scanf("%d", &num);

    deleteElement(num);
    printf("Heap after deleting 30: ");
    printHeap();

    deleteRoot();
    printf("Heap after deleting root: ");
    printHeap();

    getMax();

    return 0;
}
