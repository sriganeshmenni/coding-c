#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
void insert_at_head(int val){
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
void delete_at_head(){
	if(head==NULL){
		printf("NO Nodes");
		return;
		
	}
	else{
		head=head->next;
	}
}
void display(){
	if(head==NULL){
		printf("empty");
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
	
			int n;
	while(1){
		printf("Enter\n1.insert at head \n2.delete at head \n3.display \n Anyother to exit :\n");
		scanf("%d",&n);
		if(n==1){
			int k;
			printf("Enter the Value To insert :");
			scanf("%d",&k);
			insert_at_head(k);
		}
		else if(n==2){
		
			delete_at_head();
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
