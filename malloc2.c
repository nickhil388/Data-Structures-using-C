#include<stdio.h>
#include<stdlib.h>

void main(){

	struct emp
	{	
		int data ;
		int age;
	};

	struct emp ob;
    struct emp *ptr;

	ptr = (struct emp *)malloc(sizeof(struct emp));

	ptr->data=10;
	ptr->age=8;
	printf("%d", ptr->data);


}