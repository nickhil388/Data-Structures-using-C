#include<stdio.h>
//Binary Search

void main(){

	int num=37;
	int arr[8] = { 20,22,25,29,31,35,37,39 };

	int i=0;
	int n=0;
	int j=0;
	int mid =   arr[8/2];
	printf("%d\n",mid );
	if(num<mid){
		i=0;
		n=8/2;
	}
	else{
		i=8/2;
		n=8;
	}

	for(j=i;j<=n;j++){
		if(arr[j]==num){
				printf("Index : %d",j );			
				break;
		}
	}
	printf("\n" );
	printf("\n");
	
}