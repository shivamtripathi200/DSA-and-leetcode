#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start = NULL;

void create(){
    struct node *a = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    printf("Enter number: ");
    scanf("%d", &a->data);
    a->next = NULL;

    if(start == NULL){
        start= a;
        temp = a;

    }
    else{
        temp->next = a;
        temp = a;
    }
}

void display(){
    struct node *temp;
    temp = start;
    while(temp!= NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
}
int main(){
    int n;
    printf("No of nodes: ? ");
    scanf("%d", &n);
    while (n--) 
    {
        create();
    }
    display();
}

