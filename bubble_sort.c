#include <iostream>
using namespace std;

int main() {
   
    int arr[5] ={29,20,73,34,64};
    int i,j,n,temp;
    n=4;
    
    printf("List\n");
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    
    
 //   printf("Sorting\n");
    
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if(arr[i]<arr[j]){
                
                temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                break;
            }
         
        }
    }
    
    printf("\nSorted List\n");
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}