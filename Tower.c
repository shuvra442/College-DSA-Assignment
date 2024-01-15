#include<stdio.h>

void TOH(int n,char A,char B, char C){
  if(n==1){
    printf("Move disk 1 from %c to rod %c \n",A,B);
    return;
  }
  TOH(n-1,A,C,B);
  printf("Move disk %d from rod %c to rod %c \n",n,A,B);
  TOH(n-1,C,B,A);
}

void main(){
  int n;
  printf("Enter the number of n :: \n");
  scanf("%d",&n);

  TOH(n,'A','C','B');
}