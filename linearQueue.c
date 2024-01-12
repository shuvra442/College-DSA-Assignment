// Online C++ compiler to run C++ program online
#include <stdio.h>
#define MAX 100
int front=-1,rear=-1,i,n,choise;
int Queue[MAX];

void Enqueue(){
    int item;
    if(rear+1 == n){
        printf("Queue is full !!");
    } else{
        if(front == -1){
            front +=1;
        }
        rear +=1;
        printf("Enter the element :: ");
        scanf("%d",&item);
        Queue[rear]=item;
        printf("Item is entered sucessfully");
    }
}

void Dequeue(){
    if(front == -1 && rear==-1){
        printf("Queue is Empty !!");
    } else{
        if( front == rear) {
            front = rear=-1;
        }
       else{ 
           front = front+1;
       }
    }
}

void Display(){
    if(front == -1 && rear==-1){
        printf("Queue is Empty !!");
    } else{
        for(i=front; i<=rear;i++){
            printf(" %d ",Queue[i]);
        }
    }
}

int main() {
    printf("Enter the number of elements you want to enter in Stack:");
  scanf("%d",&n);
  do{
    printf("\nMenu:\n1.Push\n2.Pop\n3.Display\n4.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&choise);
    switch(choise){
      case 1 : 
        Enqueue();
        break;
      case 2 :
        Dequeue();
        break;
      case 3 :
        Display();
        break;
      case 4 :
        printf("Exit Point \n");
         break;
      default: 
         printf("Wrong choise .....\n");
    }
  }while(choise!=4);
  return 0;
}