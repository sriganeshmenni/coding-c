#include<stdio.h>
int q[100];
int front=0;
int rear = 0;
int size;
void enqueue(int val){
    //Insertion-->full cond
    if(rear-front==size){
        printf("Queue is Full\n");
        return;
    }
    q[rear]=val;
    rear++;
}
void dequeue(){
    //empty con
    if(front==rear){
        printf("Queue is Empty\n");
        return;
    }
    printf("%d is Removed\n",q[front]);
    front++;
}
void display(){
    if(front==rear){
        printf("Queue is empty\n");
        return;
    }
    for(int i=front;i<rear;i++){
        printf("%d",q[i]);
    }
    printf("\n");
}
int main(){
    printf("Enter the size of the queue :");
    scanf("%d",&size);
int ch;
while(1){
    printf("Enter\n1. Enqueue\n2. Dequeue\n3. Display\nAny other to Exit\n");
    scanf("%d",&ch);
    if(ch==1){
            int val;
            printf("Enter the value to be Enqueued: ");
            scanf("%d",&val);
            enqueue(val);
    }
    else if(ch==2){
         dequeue();
    }
    else if(ch==3){
        display();
    }
    else{
        break;
    }
}
}