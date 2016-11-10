#include <iostream>
using namespace std;

struct BinaryTreeNode{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};

struct QueueNode {
    struct BinaryTreeNode *data;
    struct QueueNode *next;
};

struct QueueNode *front = NULL, *rear  = NULL;

// Delete  Front [1][2][][] Rear Enter
void enQueue(struct BinaryTreeNode *treeNode){
    struct QueueNode *q = (struct QueueNode*)malloc(sizeof(struct QueueNode)); 
    q->data = treeNode;
    q->next = NULL;
    
    if(front==NULL){
        front = q;
    }
    
    if(rear!=NULL){
        rear->next = q;
    }
    
    rear = q;
    
}

int isEmptyQueue(){
    return (front==NULL);
}

struct BinaryTreeNode* deQueue(){
    
    struct QueueNode *tmp;
    struct BinaryTreeNode *data;
    
    if(isEmptyQueue()){
        return NULL;
    }else{
       
        tmp = front;
        front = front->next;
        data = tmp->data;
        free(tmp);
        
        return data;
    }        
}

void printQueue(){
    struct QueueNode *ptr = front;
    printf("\n");
    while(ptr){
        printf("%d ", ptr->data->data );
        ptr=ptr->next;
    }
}

struct BinaryTreeNode * createTreeNode(int data){
    struct BinaryTreeNode *t = (struct BinaryTreeNode*)malloc(sizeof(struct BinaryTreeNode));
    t->data = data;
    t->left = NULL;
    t->right = NULL;
    return t;   
}

void levelOrderTraversal(struct BinaryTreeNode *root){
    struct BinaryTreeNode *node;
    
    if(root==NULL){
        
    }
    else{
        printf("\nLevel Order Traversal of Binary Tree :\n");
        enQueue(root);
        while(!isEmptyQueue()){
             node = deQueue();
             printf("%d ", node->data);
            
             if(node->left)
                 enQueue(node->left);
            
             if(node->right)
                 enQueue(node->right);    
        }
    }
}

int main() {
    
       
    struct BinaryTreeNode *root;
  
    root = createTreeNode(1);
    
    root->left        = createTreeNode(2);
    root->right       = createTreeNode(3);
    
    root->left->left  = createTreeNode(4);
    root->left->right = createTreeNode(5);
    
    root->right->left  = createTreeNode(6);
    root->right->right = createTreeNode(7);

    levelOrderTraversal(root);
   /* 
    TEST
    enQueue(root);
    enQueue(root->left);
    enQueue(root->right);
    enQueue(root->left->left);
    enQueue(root->left->right);
    printQueue();
   */ 
    
    return 0;
}