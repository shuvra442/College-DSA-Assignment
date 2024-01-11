#include<stdio.h>
void main(){
  int n,i,j;
  printf("Enter the number of elements you want in array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array element one-by-one \n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  int result=linearSearch(arr,n);
  if (result==-1)
  {
    printf("Element is not Founded");
  } else{
    printf("The element is found at position %d ",result);
  }
}

int linearSearch(int arr[], int n){
  printf("Enter the item do you want to search ::");
  int item,i;
  scanf("%d",&item);

  for ( i = 0; i < n; i++)
  {
    if (arr[i]==item)
    {
      return i;
    }
    
  }
  return -1;

}