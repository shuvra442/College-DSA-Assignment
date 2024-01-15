#include<stdio.h>
#define n 5
int queue[n],item,choice,front=-1,rear=-1;

void Enqueue(){
  if (front==-1 && rear==-1)
  {
    front= rear = 0;
    printf("Enter the element to be enqueued: ");
    scanf("%d",&item);
    queue[rear] = item;

  } else if ((rear + 1)%n == front)
  {
    printf("\nQueue is Full\n");

  } else{
     rear = (rear+1)%n;
     printf("\nEnter the element to be enqueued: ");
     scanf("%d", &item);
     queue[rear] = item;
  }
}

void Dequeue(){
  if(front==-1 && rear == -1){
    printf("\nQueue is Empty \n");
  } else if (front == rear)
  {
    printf("\nThe dequeued element is %d", queue[front]);
    front = -1;
    rear = -1;
  } else{
    printf("Dequeue element is :: %d", queue[front]);
    front=(front+1)%n;
  }
}

void Display(){
  if(front==-1 && rear==-1){
    printf("\nQueue is empty\n");
  } else{
    int i=front;
    while (i != rear)
    {
      printf("%d ",queue[i]);
      i=(i+1)%n;
    }
    printf("%d\n",queue[rear]);
  }
}

void main(){
  do{
    printf("\nMENU");
    printf("\nEnqueue");
    printf("\nDequeue");
    printf("\nDisplay");
    printf("\nExit");
    printf("\nEnter you choice !!");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
      Enqueue();
      break;
    case 2:
      Dequeue();
      break;
    case 3:
      Display();
      break;
    case 4:
      break;
    default:
      break;
    }
  }while(choice!=4);
}