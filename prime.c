#include<stdio.h>

void main(){

int i,j,isPrime;

	for(i=2;i<=100;i++){

			isPrime=1;
	
		for(j=1;j<=i;j++){

				if(j!=1 && j!=i){

					if(i%j==0){
						isPrime=0;
						break;
					}
				}
		}

		if(isPrime==1)
		{
			printf("\n%d is Prime\n", i);
		}

	}


}