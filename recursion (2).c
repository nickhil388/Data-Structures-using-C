#include <iostream>
using namespace std;


int sum(int n){
    if(n==1){
        return n;
    }
    else
    {
        return n+sum(n-1);
    }
    
    
}


int fact(int n){
    if(n==1){
        return n;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
        
    printf("%d", fact(5));
    
    return 0;
}