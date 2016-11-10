#include <iostream>
using namespace std;

int main() {
   
    int arr[8] ={15,20,10,30,50,18,5,45};
    int i,j,n,temp;
    n=7;
    
    printf("List\n");
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
        
   printf("\n\nSorting\n\n");
    
    for(i=0;i<=n;i++){
        
        for(j=0;j<=i;j++){
            
            if(arr[j]>arr[i] && j<=i+1){
               
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }  
            
            printf("%d ", arr[j]);
            if(j==i){
                printf("|");
            }
        }
         printf("\n");
  
    }
    
     /*
    for(i=0;i<=n;i++){        
        for(j=0;j<=i;j++){            
         
         if(arr[j]>arr[i]){               
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp; 
            break;
          }                          
        }
    }
    */
    
    printf("\nSorted List\n");
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}