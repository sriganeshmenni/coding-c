#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
int size;
int top = -1;
void PUSH(int val){
	if(top=size-1){
		printf("Stack is full\n");
		return;
	}
	else{
	
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data= val;
    newnode->next=NULL;
	if(head==NULL){
		head = newnode;
	}
	else{
		newnode->next=head;
		head=newnode;
	}
}
	top++;
}
void POP(){
	if(head==NULL){
		printf("Stack is Empty\n");
		return;
		
	}
	else{
		printf("%d is popped out of stack : ",head->data);
		head=head->next;
		top--;
	}
}
void display(){
	if(head==NULL){
		printf("Stack is Empty\n");
		return;
	}
	else{
	struct node *temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n.");
}
}
int main(){
	printf("Enter size of the stack :");
	  scanf("%d",&size);
			int n;
	while(1){
		printf("Enter\n1.PUSH \n2.POP \n3.display \n Anyother to exit :\n");
		scanf("%d",&n);
		if(n==1){
			int k;
			printf("Enter the Value To insert :");
			scanf("%d",&k);
			PUSH(k);
		}
		else if(n==2){
		
			POP();
		}
		else if(n==3){
			display();
			
		}
		else{
			printf("exit");
			break;
		}
	}
}
