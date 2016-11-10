#include <stdio.h>
#include <stdlib.h>

struct list {
    int data;
    struct CircularLinkedList *next;
};

struct CircularLinkedList *head=NULL;


void insert(int value){
    struct list *node, *i;
    node = (struct list*)malloc(sizeof(struct list));
    node->data = value;
    node->next = NULL;
    
    if(head==NULL){
       head = node;
       node->next = head;
       printf("\nNew node (%d), {head:%d, next:%d}, inserted at begining of linked list.\n",value, head, node->next);
    }
    else{
       i = head;
       while(i->next != head){
           i=i->next;
       }
       node->next = head;
       i->next = node;
       printf("\nNew node (%d), inserted at end\n",value);
    }
}

void printList(){
    if(head == NULL){
        printf("\nList Empty\n");
    }else{
        struct list *i;
        int j = 8;
        i=head;
        while(j){
            printf("\n {address:%d,data:%d,next:%d}",i,i->data,i->next);
            i = i->next;
            j--;
        }
    }
} 

int main()
{   
    
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    
    printList();
    return 0;
}

