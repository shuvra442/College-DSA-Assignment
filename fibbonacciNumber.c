#include<stdio.h>
void main(){
  int n,a=0,b=1,c,i;
  printf("Enter the value of n :: ");
  scanf("%d",&n);
  printf("The fibbonacci series is :: %d %d ", a,b);
  for(i=2;i<n;i++){
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
  }
}