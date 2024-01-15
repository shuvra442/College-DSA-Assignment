#include<stdio.h>
#define MAX 100
int stack[MAX], n, choise,top=-1;

void push(){
  if(top==n-1){
    printf("Stack is full\n");
  } else{
    int item;
    printf("\nEnter the element to be pushed: ");
    scanf("%d",&item);
    top++;
    stack[top] = item;
    printf("Pushed %d\n",item);
  }
}

void pop(){
  if(top==-1){
    printf("Stack is empty \n");
  } else{
    int x = stack[top];
    top--;
    printf("Popped %d\n",x);
  }
}

void display(){
  int i;
  if(top == -1) {
    printf("Stack is empty \n");
    } else{
      printf("Elements in Stack are : \n");
      for (i = top; i >= 0; i--) {
        printf("%d ",stack[i]);
      } 
  }
}

void main(){
printf("Enter the number do you want to store in a stack  ");
scanf("%d",&n);
do{
  printf("\n\nMenu");
  printf("\n1.Push an element into Stack");
  printf("\n2.Pop an element from Stack");
  printf("\n3.Display the elements of Stack");
  printf("\n4.Exit");
  printf("\nEnter your choice : ");
  scanf("%d", &choise);
  switch(choise){
    case 1: 
      push();
      break; 
    case 2: 
      pop(); 
      break;
    case 3: 
      display(); 
      break;
    case 4:
        break;
    default: 
      break;
}
}while(choise!=4);
}