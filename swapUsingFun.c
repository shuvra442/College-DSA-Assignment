#include<stdio.h>

void swap(int *a, int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
  
}

void main(){
  int a,b;
  printf("Enter the the value of a and b \n");
  scanf("%d %d",&a,&b);
  printf("Before swap the value of a=%d and b=%d  \n",a,b);
  swap(&a,&b);
  printf("After swap the value of a=%d and b=%d \n",a,b);
}