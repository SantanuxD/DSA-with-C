#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node * create_linkedlist(struct node* start)
{
	struct node *new_node;
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter value: ");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	start= new_node;
	return start;
}
struct node* insert_at_beg(struct node* start)
{
	struct node *new_node;
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value : ");
	scanf("%d",&new_node->data);
	new_node->next=start;
	start= new_node;
	return start;
}
struct node* insert_at_end(struct node* start)
{
	struct node *new_node,*ptr;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("Enter value: ");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=new_node;
	return start;
}
struct node*insert_before(struct node* start)
{
	struct node *new_node,*ptr,*preptr;
	int n;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("Enter value: ");
	scanf("%d",&new_node->data);
	printf("Enter the given value: ");
	scanf("%d",&n);
	ptr=start;
	while(ptr->data != n)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=new_node;
	new_node->next=ptr;
	return start;
}
struct node*insert_after(struct node* start)
{
	struct node *new_node,*ptr,*preptr;
	int n;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("Enter value: ");
	scanf("%d",&new_node->data);
	printf("Enter the given value: ");
	scanf("%d",&n);
	preptr=start;
	ptr=start->next;
	while(preptr->data!=n)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=new_node;
	new_node->next=ptr;
	return start;
}

void display(struct node* start)
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
	
}
void dl(struct node* start)
{
int a=start->data;	
struct node* ptr;
ptr=start;
	while(ptr->next!=NULL)
	{
	
	if(a<ptr->data)
	{
		a=ptr->data;
	}
	ptr=ptr->next;
}
printf("%d \n",a);
	
}
int main()
{
	struct node *start=NULL;
	int ch;
	while(1)
	{
		printf("1. Create Linked List. \n");
		printf("2. Insert at Begining. \n");
		printf("3. Insert at End. \n");
		printf("4. Insert Before a Node. \n");
		printf("5. Insert After a Node. \n");
		printf("6. Display\n");
		printf("7. FInd largest element\n");
		printf("8. exit\n");
		printf("Enter Your Choice: ");	
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				start=create_linkedlist(start);
				break;
			case 2:
				start=insert_at_beg(start);
				break;
			case 3:
				start=insert_at_end(start);
				break;
			case 4:
				start=insert_before(start);
				break;
			case 5:
				start=insert_after(start);
				break;
			case 6:
				display(start);
				break;
			case 7:
				dl(start);
				break;
			case 8:
				exit(0);
				break;
			default :
				printf("wrong choice");					
		}
	}
	return 0;
}
