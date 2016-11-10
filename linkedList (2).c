#include <stdio.h>
#include <stdlib.h>

struct linkedList {
        int data;
        struct linkedList *next;
};
struct linkedList *head=NULL;

void insertElement(struct linkedList *list, int value){
    struct linkedList *newnode, *temp;
    newnode = (struct linkedList*)malloc(sizeof(struct linkedList));
    newnode->data = value;
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
    }
    else{
        temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newnode;
    }
}

void printList(){
    struct linkedList *ptr = head;
    if(ptr->next==NULL){
        printf("\nList is Empty\n");
    }else{
        while(1){
            printf("\n {data :%d, address : %d, next:%d } \n",ptr->data, ptr, ptr->next );  
            ptr = ptr->next;
            if(ptr->next==NULL){
                break;
            }
        }
    }
}

int main()
{   
    struct linkedList *list;
    insertElement(list, 2);
    insertElement(list, 4);
    insertElement(list, 6);
    insertElement(list, 8);
    
    printList(list);
    
    return 0;
}

