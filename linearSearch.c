#include<stdio.h>
void main(){
  int n,i,j,item;
  printf("Enter the number of elements you want in array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array element one-by-one \n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the item do you want to search ::");
  
  scanf("%d",&item);

  for ( i = 0; i < n-1; i++)
  {
    if (arr[i]==item)
    {
      printf("Element is found at index:: %d ", i);
    }
  }
  printf("Element is not present in the arra");

}