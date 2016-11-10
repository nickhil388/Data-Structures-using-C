#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int info;
	struct node *link;
};

struct node* start = NULL;

struct node* createNode(){
	struct node *n;
	n= (struct node*)malloc(sizeof(struct node));
	return n;
}


void insertNode(val){
	struct node *temp, *t;
	temp = createNode();
	temp->info=val;
	temp->link=NULL;

	if(start==NULL){
		start=temp;
	}
	else {
		t=start;
		while(t->link!=NULL){
		  t=t->link;
		}
		t->link=temp;

	}
}

void printList(){
	struct node *p;
	
	if(start==NULL){

	}
	else{
		p=start;
		while(p!=NULL){
			printf("%d  ", p->info);
			p=p->link;
		}
		    
	}
}

void deleteFirstNode()
{
	struct node *r;
	if(start==NULL)
		printf("List Empty");
	else{
		r=start;
	    start=start->link;
		free(r); 
	}

}

void deleteLastNode()
{
	struct node *p,*temp;
	if(start==NULL)
		printf("List Empty");
	else{
		p=start;
		while(p->link!=NULL){
			temp=p;
			p=p->link;
			if(p->link==NULL)
			{	temp->link=NULL;
				free(p);
			}
		}
	}

}

void deleteNode(val){

	struct node *p, *temp, *r;
	if(start==NULL)
		printf("List Empty");
	else{
		p=start;

		while(p!=NULL){
			temp=p;
			p = p->link;			
			if(p->info == val)
			{	r=p;
				temp->link = p->link;
				break;
			}
		}
		free(r);

	}
}

void insertInMiddle(val){
    struct node *p, *temp, *newNode;
    int counter=0;
    int mid=0;
    if(start==NULL)
    	printf("List Empty");
    else{

    	p=start;

    	while(p!=NULL	){
    		counter++;
    		p=p->link;
    	}

    	mid=counter/2;
    	counter=0;
    	p=start;

		newNode = createNode();
		newNode->info=val;
		//printf("%d\n",temp->info );
    	while(p!=NULL){
    		counter++;
    		// printf("Countre : %d , mid %d", counter, mid);	
    		if(counter==mid)
    		{
    		    temp=p->link; 		
		   		p->link=newNode;
    			newNode->link = temp;
    			break;
    		}
    		p=p->link;
    	}
    }

}

void reverseLinkedList(){

	struct node *p ,*temp , *nextNode, *end;
 	if(start==NULL)
    	printf("List Empty");
    else{
				
		temp=start;
		end=start;
		nextNode = start->link;//2
		start->link=NULL; //null   	

    	while(nextNode!=NULL){
			temp=nextNode;  			//2
			nextNode=nextNode->link;	//3
			temp->link = end; 			//1<-2
			end =temp;        			//2
    	}

    	start=temp;

    }
}

void main(){

	insertNode(12);
	insertNode(3);
	insertNode(5);
	insertNode(2);
	printList();
	printf("\n");
		
	//insertInMiddle(100);

	reverseLinkedList();
	//deleteLastNode();
	// deleteNode(3);
	printf("\n");
	printList();

}