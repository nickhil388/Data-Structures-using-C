#include<stdio.h>

void StairCase(int n) {
    int i = 0; 
    int j ;
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            
            if(j>i){
                printf(" ");
            }
            else{
                printf("#");
            }

        }
        printf("\n");
        
    }

}

int sum(n, arr){

        int sum =0;
        int i=0;
        for(i=0;i<n;n++){
            sum+=arr[i];
        }

        return sum;

}



void main(){

    //StairCase(12);

    int a[]={2,2,2,2};
    int *arr = a;

    printf("%d",sum(4,arr) );
}


