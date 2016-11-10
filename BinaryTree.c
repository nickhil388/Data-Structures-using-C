#include <iostream>
using namespace std;


struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *root = NULL;


struct Node* createNode(int data){
    struct Node *n;
    n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    
    return n;
}


void preOrder(struct Node *root){
    if(root){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    
    root = createNode(1);
    
    root->left        = createNode(2);
    root->right       = createNode(3);
    
    root->left->left  = createNode(4);
    root->left->right = createNode(5);
    
    root->right->left  = createNode(6);
    root->right->right = createNode(7);
    
    printf("Preorder Traversal : \n");
    preOrder(root);
    
    return 0;
}


/* Binary Tree Structure
        
                  1
        2                3
  4          5       6         7
 null       null    null      null




*/