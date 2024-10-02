#include<stdio.h>
#include<stdlib.h>

struct Node{
    int key;
    struct Node *left;
    struct Node *right;
};

struct Node* newNode(int item){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node* search(struct Node* root, int key){
    if(root == NULL || root->key == key){
        return root;
    }

    if(root->key < key) return search(root->right, key);
    return search(root->left, key);
}

int main(){
    struct Node* root = newNode(50);
    root->left = newNode(30);
    root->right = newNode(70);
    root->left->left = newNode(20);
    root->left->right = newNode(40);
    root->right->left = newNode(60);
    root->right->right = newNode(80);

    int target = 0;

    printf("Enter the target value: ");
    scanf("%d", &target);

    struct Node* temp = search(root, target);
    if(temp != NULL){
        printf("Element found: %d\n", temp->key);
    }else{
        printf("Element not found\n");
    }

    return 0;
}