#include<stdio.h>
#include<stdlib.h>

struct arrayStack {
	int top;
	int capacity;
	int *array;
};

struct arrayStack * createStack(int capacity){

	struct arrayStack *stack;
	stack = (struct arrayStack *)malloc(sizeof(struct arrayStack));
	stack->top = -1;
	stack->capacity = capacity;
	stack->array = (int *)malloc(capacity*sizeof(int));
	return stack;
}

void printStack(struct arrayStack *stack)
{	int i=0;
	

	for(i=0;i<stack->capacity;i++){
		stack->array[i]=i+2;
		printf("%d \n", stack->array[i]) ;
	}

	stack->array = (int *)realloc(stack->array, (stack->capacity=stack->capacity*2));
	printf("-----------****----------------------------------------") ;


	for(i=7;i<stack->capacity;i++){
		stack->array[i]=i+2;
		printf("%d \n", stack->array[i]) ;
	}

	printf("-----------####----------------------------------------") ;

	for(i=0;i<stack->capacity;i++){
		//stack->array[i]=i+2;
		printf("%d \n", stack->array[i]) ;
	}


}

void main()
{
	struct arrayStack *stack;
	stack = createStack(8);
	printStack(stack);
}