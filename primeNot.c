#include<stdio.h>
void main(){
  int i,n,m,flag=0;
  printf("Enter the number to check prime or not \n");
  scanf("%d",&n);
  m=n/2;
  for ( i = 2; i < m; i++)
  {
    if (n%i==0)
    {
      printf("Is not a prime number \n");
      flag=1;
      break;
    }
  }
  if (flag ==0){
    printf("Is a prime number\n");
  }  
}