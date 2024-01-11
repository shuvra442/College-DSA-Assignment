#include<stdio.h>
#define MAX 100
int stack[MAX],n,top=-1,choise;

void push(){
  if(top>=n-1){
    printf("stack is overflow!!!");
  } else{
    int item;
    printf("\nEnter the element to be pushed: ");
    scanf("%d",&item);
    top = top+1;
    stack[top] = item;
  }
}

void pop(){
  if(top==-1){
    printf("Stack is underflow !!!");
  } else{
    printf("Popped element %d\n",stack[top]);
    top--;
  }
}
void display(){
  int i;
  if(top == -1) {
    printf("Stack is empty \n");
    }else{
      printf("Elements in Stack are : \n");
      for(i=top;i>=0;i--){
      printf("%d ",stack[i]);
      }  
    }
}

void main(){
  printf("Enter the number of elements you want to enter in Stack:");
  scanf("%d",&n);
  do{
    printf("\nMenu:\n1.Push\n2.Pop\n3.Display\n4.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&choise);
    switch(choise){
      case 1 : 
        push();
        break;
      case 2 :
        pop();
        break;
      case 3 :
        display();
        break;
      case 4 :
        printf("Exit Point \n");
         break;
      default: 
         printf("Wrong choise .....\n");
    }
  }while(choise!=4);
}