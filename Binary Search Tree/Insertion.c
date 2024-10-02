#include<stdlib.h>
#include<stdio.h>   

struct Node{
    int key;
    struct Node* left;
    struct Node* right;
};

struct Node *newNode(int val){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->key = val;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node* insert(struct Node* root, int val){
    if(root == NULL)    return newNode(val);

    if(root->key == val)  return root;

    if(val < root->key)   root->left = insert(root->left, val);
    if(val > root->key)   root->right = insert(root->right, val);


    return root;
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}


int main(){

    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    inorder(root);
    insert(root, 100);
    printf("\n");
    inorder(root);
    insert(root, 21);
    printf("\n");
    inorder(root);

    return 0;
}