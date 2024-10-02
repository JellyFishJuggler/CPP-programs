#include<stdlib.h>
#include<stdio.h>

struct Node{
    int key;
    struct Node* left;
    struct Node* right;
};

struct Node* newnode(int val){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->key = val;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node* getSuccessor(struct Node* root, int val){
    struct Node* curr = root;
    curr = curr->right;
    while(curr != NULL && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}


struct Node* delNode(struct Node* root, int val){
    if(root == NULL) return root;

    if(root->key < val) root->right = delNode(root->right, val);
    else if(root->key > val) root->left = delNode(root->left, val);
    else{
        if(root->left == NULL){
            struct Node* newNode = root->right;
            free(root);
            return newNode;
        }

        if(root->right == NULL){
            struct Node* newNode = root->left;
            free(root);
            return newNode;
        }
    }
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
    root = newnode(50);
    root->left = newnode(30);
    root->right = newnode(70);
    root->left->left = newnode(20);
    root->left->right = newnode(40);
    root->right->left = newnode(60);
    root->right->right = newnode(80);

    printf("Inorder traversal of the tree: \n");
    inorder(root);
    printf("\n");   


    root = delNode(root, 20);
    root = delNode(root, 30);
    root = delNode(root, 50);

    printf("Inorder traversal of the modified tree: \n");
    inorder(root);
    return 0;
}