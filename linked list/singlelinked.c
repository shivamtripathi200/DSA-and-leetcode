#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
void beginsert(){
    struct node *b;
    b=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element that you want to insert at the beginning : ");
    scanf("%d",&(b->data));
    b->next=start;
    start=b;
}

void endinsert(){
    struct node *temp;
    struct node *lastnode=(struct node *)malloc(sizeof(struct node));
    lastnode->next=NULL;
    printf("Enter the element to be inserted at last");
    scanf("%d",&lastnode->data);
    temp=start;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=lastnode;
    
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
    temp->next=newnode;
}
void display(){
    struct node *temp;
    temp = start;
    printf("\n\nThe elements of the linked list are :\n ");
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    int n;
    printf("Enter the number of node that you want in a linked list  : ");
    scanf("%d",&n);
    struct node *q;
    for(int i=0;i<n;i++){
        struct node *a;
        a=(struct node *)malloc(sizeof(struct node));
        printf("Enter the %dth number",i+1);
        scanf("%d",&(a->data));
        a->next=NULL;
        if(start==NULL){
            start=a;
            q=start;
        }else{
            q->next=a;
            q=q->next;
        }
    }
    beginsert();
    endinsert();
    position();
    afterelement();
    display();
}
