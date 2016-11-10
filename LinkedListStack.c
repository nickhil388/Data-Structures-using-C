#include<stdio.h>
#include<stdlib.h>

struct node{
	int item;
	struct node *link;
};

struct node *top=NULL;


void push(int item){

	struct node *ptr;
	ptr = (struct node*)malloc(sizeof(int));
	ptr->item=item;
	ptr->link=top;
	top=ptr;
}

void pop(){
	struct node *ptr;
	ptr = top;
	top=top->link;
	free(ptr);

}
	

void viewStack()
{
	struct node *ptr;
	ptr=top;
	while(ptr!=NULL){
		printf("%d " ,ptr->item );
		ptr=ptr->link;
	}
			printf("\n");
}


void main(){

 push(6);
 push(34);
 push(2);
 push(8);
 push(44);
 push(7);
 push(8);
 push(44);
 push(7);

 pop();
 viewStack();



}