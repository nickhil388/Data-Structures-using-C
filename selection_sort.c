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
    
    
    
     
    /*for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if(arr[i]<arr[j]){
                
                temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                //break;
            }
            printf("%d ", arr[j]);
            if(j==i){
                printf("|");
            }
          
        }
        printf("\n");
    }*/
     
    // 15 20 10 30 50 18 5 45 
    /*
    for(i=0;i<=n;i++){        
        for(j=0;j<=n;j++){            
          
         if(arr[j]<arr[i]&&j>=i+1){               
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp; 
           
          }   
            if(j==i+1){                
              printf("%d ",arr[i]);
            }else{                
                printf("%d ",arr[j]);                
            }
        }
        printf("\n");
        
    }*/
    
    // Selection Sort
    
      for(i=0;i<=n;i++){        
        for(j=i+1;j<=n;j++){            
          
         if(arr[i]>arr[j]){               
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp; 
           
          }           
        }    
      }
    
      
    printf("\nSorted List\n");
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}


 //http://btechsmartclass.com/DS/U4_T5.html
   