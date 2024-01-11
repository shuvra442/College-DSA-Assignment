#include<stdio.h>
void main(){
  int n,s=0,r,temp;
  printf("Enter a number: ");
  scanf("%d",&n);
  temp=n;
  while (n>0)
  {
    r=n%10;
    s=(s*10)+r;
    n=n/10;
  }
  if (temp==s)
  {
    printf("Is a palindrome number \n");
  } else{
    printf("Is not a palindrome number ");
  }
}