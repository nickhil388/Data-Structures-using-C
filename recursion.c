#include<stdio.h>

int dec(int n){

	if(n==0)
		return 0;
	else
	{
		printf("%d\n",n );
		return dec(n-1);
	}


}

void main(){

	dec(10);


}