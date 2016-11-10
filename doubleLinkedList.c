#include <stdio.h>
#include <stdlib.h>

struct list {
	int data ;
	struct list *next;
	struct list *prev;
};

struct list *head = NULL;


void insert(int value){
	struct list *node, *i;
	node = (struct list*)malloc(sizeof(struct list));
	node->data = value;
	node->next = NULL;
	if(head==NULL){
		node->prev = NULL;
		head = node;
	}
	else{
		i=head;
		while(i->next!=NULL){
			i = i->next;
		}
		node->prev = i;
		i->next = node;
	}
}

int insertAfter(int location, int value){
    struct list *node,*i, *temp;
    node = (struct list*)malloc(sizeof(struct list));
    
    i=head;
    
    if(i==NULL){
        printf("\nList Empty\n");
      
    }else{
        while(i->data != location){
          if(i->next == NULL){
              printf("\n Item not found in list.\n");
              return 0;
          }else{
              i=i->next;
          }
        }
        // [P N]->[P N] ->[P N];
        //temp holds address of element after new node;
        temp = i->next;
        
        node->data = value;
        node->prev = i;
        node->next = i->next;
        
        i->next =node; 
        temp->prev = node;               
    }
	return 1;    
}

void printList(){

	struct list *i;
	i=head;
	if(i==NULL){
		printf("\nList Empty\n");
	}else{
		while(i->next!=NULL){
			printf("\n{address: %d, data:%d, prev:%d, next:%d}", i, i->data, i->prev, i->next);
			i=i->next;
		}
			printf("\n{address: %d, data:%d, prev:%d, next:%d}", i, i->data, i->prev, i->next);
		
	}

}

void main(){
	
	insert(2);
	insert(4);
	insert(6);
	insert(8);
	insert(10);
	insert(12);
    
    insertAfter(10,11);
    
	printList();
	printf("\n");

}