#include<stdio.h>

int binarySearch(int arr[], int l, int r, int x){
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // If we reach here, then element was not present
    return -1;
}

void main(){
  
  int n;
  printf("Enter the number of elements you want in array: ");
  scanf("%d",&n);
  int arr[n],i;
  // Input elements into array
  for (i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("THe array element is :: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d",arr[i]);
  }
  printf("\nNow find the size of the array :: \n");
  int  size=sizeof(arr)/sizeof(arr[0]);
  printf("The Size Of The Array Is %d\n",size);
  printf("\n Enter Element To Search : ");
  int searchElement;
  scanf("%d", &searchElement);
  int result = binarySearch(arr,0,size-1,searchElement);
  result == -1 ? printf("Element is not find in array") : printf("Element is find at index %d ", result);
}