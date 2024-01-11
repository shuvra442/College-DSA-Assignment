#include<stdio.h>

int fact(int n, int a){
  if (n==0)
  {
    return a;
  }
  return fact(n-1, n*a);
}

void main(){
  int n;
  printf("Enter the number of n :: ");
  scanf("%d",&n);
  printf(" %d ",fact(n,1));
}