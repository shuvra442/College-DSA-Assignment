#include<stdio.h>
void main(){
  int arr[100],n,i,j,key;
  printf("Enter the number of elements you want to sort: ");
  scanf("%d",&n);
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("The array is ::");
  for (i = 0; i < n; i++)
  {
    printf(" %d ",arr[i]);
  }

  for ( i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;
    while (j>=0 && arr[j]> key)
    {
      arr[j+1]=arr[j];
      j=j-1;
    }
    arr[j+1]=key;
    
  }

  for ( i = 0; i < n; i++)
  {
    printf("\n%d",arr[i]);
  }
  
  
}