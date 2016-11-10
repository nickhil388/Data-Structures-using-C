#include <iostream>
using namespace std;

struct BinaryTreeNode{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};

struct StackNode {
    struct BinaryTreeNode* data;
    struct StackNode *next;
};


struct StackNode *top = NULL;


void push(struct BinaryTreeNode *treeNode){    
  struct StackNode *node = (struct StackNode*)malloc(sizeof(struct StackNode));
  node->data = treeNode;
  node->next = top;
  top = node;        
}

struct BinaryTreeNode* pop(){
  if(top){      
    
    struct BinaryTreeNode *node = top->data;
    struct StackNode *temp = top;
    top=top->next;
    free(temp); 
    return node;   
      
      
  }else{
      return NULL;
  }  
}

int IsEmptyStack(){    
        return (top==NULL);
}
void PrintStack(){
    struct StackNode *ptr = top;
    printf("\n\n");
    while(ptr){
        printf("%d ", ptr->data->data);
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


void preOrder(struct BinaryTreeNode *root){
    if(root){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void preOrderNonRecursive(struct BinaryTreeNode *root){
     
      while(1)  {
            while(root) {  
                
                printf("%d ", root->data);
                push(root);                
                root = root->left;
            }
            if(IsEmptyStack()) 
                break;
          
            root = pop();  
            //printf("\n Poped : %d\n", root->data);
            root = root->right; 
            //printf("\n Root: %d\n", root==NULL);
      }
      
}

int main(){
  
  struct BinaryTreeNode *root;
  
    root = createTreeNode(1);
    
    root->left        = createTreeNode(2);
    root->right       = createTreeNode(3);
    
    root->left->left  = createTreeNode(4);
    root->left->right = createTreeNode(5);
    
    root->right->left  = createTreeNode(6);
    root->right->right = createTreeNode(7);
    
    
    printf("\nPreorder Traversal :\n");
    preOrder(root);
    
    printf("\nPre Order Non Recursive Traversal :\n");
    preOrderNonRecursive(root);        
    //push(root);
    //push(root->left);
    //push(root->right);
    
    
    //PrintStack();
    
   //// printf("\n\n POP : %d ", pop()->data);
    
  return 0;
}





