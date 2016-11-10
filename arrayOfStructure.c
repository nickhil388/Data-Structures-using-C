#include <iostream>
using namespace std;


struct Node {
    int data;
    struct Node *next;
};

struct Node *arr[3];

struct Node* createNode(int data){
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}


int main() {
    
    struct Node *a;
    a = createNode(3);
    arr[0] =a;
    printf("%d ", arr[0]->data);
    
    
    
    return 0;
}