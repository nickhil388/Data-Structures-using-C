#include<stdio.h>

void main(){

	int list[7] = {5,3,8,9,6,4,0};
	int i;
	int lar;
	lar=list[0];
	int sec;
	for(i=0;i<7;i++){
		if(list[i]>lar){
			sec=lar;
			lar=list[i];
		}
	}

		printf("Largest : %d\nSecond Largest : %d\n",lar , sec );
		printf("\n\n")		;
	
}