#include<stdio.h>
void main(){
  int n,i,j,c[10][10];
  printf("Enter the number of n ::");
  scanf("%d",&n);
  int a[10][10],b[10][10];
  printf("Inser value of first matrix value :: \n");
  for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < n; j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Inser value of seconde matrix value :: \n");
  for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < n; j++)
    {
      scanf("%d",&b[i][j]);
    }
  }

printf("Print the matrix value  :: \n");

  printf("print value of first matrix value :: \n");
  for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < n; j++)
    {
      printf(" %d ",a[i][j]);
    }
    printf("\n");
  }
  printf("print value of seconde matrix value :: \n");
  for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < n; j++)
    {
      printf(" %d ",b[i][j]);
    }
    printf("\n");
  }
  
  printf("Performe the addition of two matrix :: \n");
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      c[i][j]=a[i][j]+b[i][j];
    }
  }

printf("The resultant matrix is :::\n");
for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    printf(" %4d ",c[i][j]);
  }
  printf("\n");
}
}