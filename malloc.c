#include<stdio.h>
#include<stdlib.h>

void main(){

 int a;

 int *p;
 int s ;
  p = (int*)malloc(sizeof(int));

  *p=10;
  printf("%d\n", *p);
  s= sizeof(*p);
  printf("%d\n" ,s) ;


}