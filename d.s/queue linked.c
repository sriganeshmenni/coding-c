#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;
Node *head=NULL;
Node *tail=NULL;
void enqueue(int val){
    //Insertion-->full cond
   Node *newnode = (Node *)malloc(sizeof(Node));
   newnode->data=val;
   newnode->next=NULL;
   if(head==NULL){
		head = newnode;
	}
	else{
		newnode->next=head;
		head=newnode;
	}
}
void dequeue(){
   if(head==NULL){
		printf("Queue is Empty");
		return;
		
	}
	else{
		head=head->next;
	}
}
void display(){
   if(head==NULL){
		printf("Queue is empty");
		return;
	}
	else{
	struct node *temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
}
int main(){
    
int ch;
while(1){
    printf("Enter\n1. Enqueue\n2. Dequeue\n3. Display\n4. get front\n5. get rear\n6. get size\nAny other to Exit\n");
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
    else if(ch==4){
        get_front();
    }
     else if(ch==5){
        get_rear();
    }
     else if(ch==6){
        get_size();
    }
    else{
        break;
    }
}
}