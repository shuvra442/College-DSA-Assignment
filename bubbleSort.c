#include<stdio.h>
void main(){
  int n,i,j,temp;
  printf("Enter the number of elements you want in array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array element one-by-one \n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  // Sorting the array using Bubble sort algorithm
  for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
      if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        }
    }
  }
  printf("\nThe sorted array is :\n");
  for(i=0;i<n;i++){
  printf("%d ",arr[i]);
  }
}