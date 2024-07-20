#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start = NULL;
void beginsert(){
    printf("\nEnter the number you want to insert at the beginning:\n");
    struct node *a=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&(a->data));
    a->prev=NULL;
    a->next=start;
    start->prev=a;
    start=a;
}
void endinsert(){
    struct node *q;
    printf("\nEnter the the number you want to insert at last:\n");
    struct node *a;
    a=(struct node *)malloc(sizeof(struct node));
    q=start;
    a->next=NULL;
    scanf("%d",&(a->data));
    while (q->next!=NULL){
        q=q->next;
    }
        a->prev=q;
        q->next=a;
}
void display(){
    struct node *temp;
    temp = start;
    while(temp!=NULL){
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
void position(){
    struct node *temp;
    temp=start;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    int n;
    printf("Enter the position to insert the new node:\n");
    scanf("%d",&n);
    printf("Enter the number to be inserted at the %dth position:\n",n);
    scanf("%d",&newnode->data);
    for (int i = 1; i < n-1; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    
}
void afterelement(){
    struct node *temp;
    temp=start;
    int n;
    printf("Enter the element after which the new node should be added:\n");
    scanf("%d",&n);
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("Enter the new node to be added after the element");
    scanf("%d",&newnode->data);
    while(temp->data!=n){
        temp=temp->next;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
}
int main(){
    int n;
    printf("Enter the no of node you want to create");
    scanf("%d",&n);
    struct node *q;  
    for (int  i = 0; i < n; i++)
    {   
        printf("Enter the %dth number:\n",i+1);
        struct node *a=(struct node *)malloc(sizeof(struct node));
        a->next=NULL;
        a->prev=NULL;
        scanf("%d",&(a->data));
        if (start==NULL)
        {
            start=a;
            q=start;
        }else{
            q->next=a;
            a->prev=q;
            q=q->next;
        }
    }
    beginsert();
    endinsert();
    position();
    afterelement(); 
    display();
}
