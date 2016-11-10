#include <stdio.h>
#include <stdlib.h>

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
struct BinaryTreeNode *root = NULL;

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
        
        if(tmp==rear)
            rear=NULL;
        
        front = front->next;
        data = tmp->data;
        free(tmp);
        
        return data;
    }        
}

void emptyQueue(){
    
    struct QueueNode *tmp;   
    tmp   = front;
    while(tmp){
        free(front);
        tmp=tmp->next;                
        front=tmp;
    }
    
    front = rear = NULL;
}
void printQueue(){
    struct QueueNode *ptr = front;
    printf("\n");
    if(!ptr){
        printf("\nQueue is Empty.\n");
    }
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
             printf("\n%u (%u,%u)", node->data, node->left, node->right);
            
             if(node->left)
                 enQueue(node->left);
            
             if(node->right)
                 enQueue(node->right);    
        }
    }
    
   // emptyQueue();
}

    
void insertNodeinTree(int data){
    struct BinaryTreeNode *node, *n;
    n = createTreeNode(data);
    
    if(root==NULL){
        root = n;    
    }
    else{
        enQueue(root);
        while(!isEmptyQueue()){
             node = deQueue();
            
             if(node->left)
                 enQueue(node->left);
             else{
                 node->left = n;                                                                    
                 emptyQueue();
                 break;
             }
            
             if(node->right)
                 enQueue(node->right);    
             else{
                 node->right = n;
                 emptyQueue();
                 break;
             }
            
            
        }
    } 
     
}


int main() {
   
    insertNodeinTree(1);  
    insertNodeinTree(2);
    insertNodeinTree(3);  
    insertNodeinTree(4);  
    insertNodeinTree(5);  
    
    //printf("%d (%d, %d)\n", root->data, root->left->data, root->right->data);
    //printf("%d ", root->right->left);
    //printf("%d (%d, %d)\n", root->left->data, root->left->left, root->left->right);
    //printf("%d (%d, %d)\n", root->right->data, root->right->left, root->right->right);
   
    //printf("\n%d, %d, %d, %d", root->left->left, root->left->right, root->right->left, root->right->right);
   // printQueue();
    
    //printf("F : %d \n", rear==NULL);
    
  //  printf("%d ", front->data->data);
    
    
    
    levelOrderTraversal(root);
       
    /*
    struct BinaryTreeNode *root;
  
    root = createTreeNode(1);
    
    root->left        = createTreeNode(2);
    root->right       = createTreeNode(3);
    
    root->left->left  = createTreeNode(4);
    root->left->right = createTreeNode(5);
    
    root->right->left  = createTreeNode(6);
    root->right->right = createTreeNode(7);
    levelOrderTraversal(root);
    */
    /*    
    enQueue(root);
    enQueue(root->left);
    enQueue(root->right);
    enQueue(root->left->left);
    enQueue(root->left->right);
        
    printf("\n(%d, %d) ", front->data->data, rear->data->data );
    
    printQueue();
     */  
    return 0;
}