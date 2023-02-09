#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *link;
};
struct node* add_beg(struct node  *head,int data){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=head->link;
	head=temp;
	return head;
}
void  add_at_last(struct node *head,int data1){
struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data1;
	if(head->data==0){
		head->data=data1;
		return ;
		
	}
	
	while(head->link!=NULL){

		//printf("%d\n",head->data);
			head=head->link;
	}
	head->link=temp;//head=head->link;
	//printf("%d",head->data);
	//return head;
}
void add_at_pos(struct node *head,int data, int position){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	for(int i=1;i<position-1;i++){
		head=head->link;
	}
	temp->link=head->link;
	head->link=temp;

}
void print1(struct node *head){
	while(head!=NULL){
		printf("%d\n",head->data);
		head=head->link;
		
	}
}
struct node* del_first(struct node *head){
	//struct node *temp=head;
	head=head->link;
	return head;
}
struct node* del_last(struct node *head){
	struct node *temp1=head;
	struct node *temp2=head;
	while(temp1->link!=NULL){
		temp2=temp1;
		temp1=temp1->link;
	}
	temp2->link=NULL;
	return head;
}
struct node* del_at_pos(struct node *head,int position){
struct node* temp=head;
	for(int i=1;i<position-1;i++){
		temp=temp->link;
	} 
	temp->link=temp->link->link;
	//free(head->link);
	return head;
}
struct node* reverse(struct node *head){
	struct node *prev=NULL;
	struct node *next=NULL;
	while(head!=NULL){
		next=head->link;
		head->link=prev;
		prev=head;
		head=next;
		
	}
	head=prev;
	return head;
}
void sort(struct node* head){
	struct node *i,*j;
	int temp;
	for(i=head;i->link!=NULL;i=i->link){
		for(j=i->link;j!=NULL;j=j->link){
			if(i->data>j->data){
				temp=i->data;
				i->data=j->data;
				j->data=temp;
			}
		}
	}
}
void merge(struct node* head1,struct node* head2){
	struct node* temp;
	temp=head1;
	while(temp->link!=NULL){
		temp=temp->link;
	}
	temp->link=head2;
	
	
}
struct node* rduplicate(struct node* head){
		struct node* temp=head;
		while(temp!=NULL&&temp->link!=NULL){
			if(temp->data==temp->link->data){
			
			//struct node* r=temp->link;
			//while(temp->data==temp->link->data)
				temp->link=temp->link->link;
				//temp=temp->link;
			//}
			}
			else{
			temp=temp->link;
		}}
		return head;
}
int main(){
	struct node *head=(struct node*)malloc(sizeof(struct node));
	//head->data=5;
	//struct node *current=(struct node *)malloc(sizeof(struct node));
	//current->data=6;
	//head->link=current;
	//current=(struct node *)malloc(sizeof(struct node));
	//current->data =7;
	//head->link->link=current;
	struct node *head2=(struct node*)malloc(sizeof(struct node));
	//head=add_beg(head,18);
//add_at_last(head,8);
		//add_at_last(head,90);
		//add_at_pos(head,76,3);
	for(int i=0;i<3;i++){
	int data;
		scanf("%d",&data);
		add_at_last(head,data);
		
	}/*
	
	for(int i=0;i<3;i++){
	int data;
		scanf("%d",&data);
		add_at_last(head2,data);
		
	}*/
	printf("first link list\n");
	print1(head);
	//printf("second link list\n");
	
	//printf("new line\n");
	//sort(head);
	//print1(head2);
//	merge(head,head2);
	//printf("after merging\n");
	//print1(head);
		//printf("new line\n");
	//sort(head);
	//print1(head);printf("after removing duplicate\n");
	//head=rduplicate(head);
	
	//print1(head);
	//printf("%d %d",head->data,head->link->data);
	//add_at_last(head,13);
	//	print1(head);
	//head=del_first(head);
	//print1(head);
	printf("new line after deletin last element\n");
	
	head=reverse(head);
	head2=head;
	print1(head2);
	//head=del_last(head);
	
	
	
	//print1(head);
	//printf("after deleting element at certain posiiton");
	//head=del_at_pos(head,3);
	//print1(head);
}
