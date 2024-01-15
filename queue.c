#include<stdio.h>
#define MAX 100
int queue[MAX],n,i,item,chioce,front=-1,rear=-1;

void Enqueue(){
  if(rear+1==n){
    printf("Queue is Full\n");
  } else{
    if(front == -1){
      front +=1;
    } else{
      rear+=1;
    }
    printf("\nEnter the element to be enqueued : ");
    scanf("%d",&item);
    queue[rear] = item;
    printf("Element %d is added to Queue.\n",item);
  }
}
void Dequeue(){
  if(front==-1 && rear==-1){
    printf("Queue is Empty \n");
  }else{
    int temp=queue[front];
    printf("The dequeued element is: %d \n",temp);
    if (front == rear) {
      /* only one element present in the queue */
      front = -1;
      rear = -1;
      } else {
        /* more than one elements are there in the queue */
        front += 1;
        }
  }
}
void Display(){
  int i;
  if(front==-1 && rear==-1){
    printf("Queue is Empty \n");
    } else{
      printf("Elements in the Queue are:\n");
      for(i=front;i<=rear;i++){
        printf("%d ",queue[i]);
      }
      printf("\n");
    }
}


void main(){
  printf("Enter the number of elements you want to insert in Queue : ");
  scanf("%d",&n);
  do{
    printf("\nMENU");
    printf("\nEnqueue");
    printf("\nDequeue");
    printf("\nDisplay");
    printf("\nExit");
    printf("\nEnter you choice !!");
    scanf("%d",&chioce);
    switch (chioce)
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
  }while(chioce!=4);
}