#include<stdio.h>
#include<stdlib.h>

struct node
{
    int coef,expo;
    struct node* next;
};

struct node* insertpoly(struct node* thead,int c,int e);
struct node* append(struct node* thead,int c,int e);
void display(struct node* thead);

void main()
{
    int a,b,n,i;
    struct node* p1head;
    p1head=NULL;

    

    printf("Enter the no of terms of polynomial : ");
    scanf("%d",&n);
    printf("\nEnter the polynomial : ");
    for(i=0;i<n;i++){
        printf("\nEnter the coefficient and exponent of the term :");
        scanf("%d%d",&a,&b);
        p1head=insertpoly(p1head,a,b);
    }

    printf("\nThe polynomial is : ");
    display(p1head);
}

struct node* append(struct node* thead,int c,int e)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->coef=c;
    newnode->expo=e;
    if(thead==NULL){
    newnode->next=NULL;
    return newnode;
    }
    struct node* trav=thead;
    while(trav->next!=NULL) 
        trav=trav->next;
    trav->next=newnode;
    newnode->next=NULL;
    return thead;
}

struct node* insertpoly(struct node* thead,int c,int e)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->coef=c;
    newnode->expo=e;
    if(thead==NULL){            
        newnode->next=NULL;
        return newnode;
    }
    struct node* prev,* curr;
    prev=curr=thead;
    while(curr!=NULL && curr->expo>e){
        prev=curr;
        curr=curr->next;
    }
    if(curr==thead){            
        newnode->next=curr;
        return newnode;
    }
    else if(curr==NULL){        
        prev->next=newnode;
        newnode->next=NULL;
    }
    else{
        newnode->next=curr;
        prev->next=newnode;
    }
    return thead;
}

void display(struct node* thead)
{
    struct node* temp=thead;
    if(temp==NULL){
        printf("\nEmpty..");
    }
    else{
        while(temp->next!=NULL){
            printf(" %dx^%d +",temp->coef,temp->expo);
            temp=temp->next;
        }
       printf(" %dx^%d ",temp->coef,temp->expo);
    }
}