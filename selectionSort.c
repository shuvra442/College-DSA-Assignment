#include<stdio.h>
void main(){
  int n,i,j,small;
  printf("Enter the value of n ::");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the Array element one-by-one :: ");
  for ( i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for(i=0;i<n-1;i++){  /* arr[5,2,7,1,3]*/
    small=i;
    for(j=i+1; j<n; j++){
      if(arr[j]<arr[small]){
        small=j;
        }
    }
    int temp=arr[small];
    arr[small]=arr[i];
    arr[i]=temp;
}
for ( i = 0; i < n; i++)
{
  printf("%d", arr[i]);
}

}