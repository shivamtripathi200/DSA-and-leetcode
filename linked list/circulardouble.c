#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
void beg_insert()
{
    struct node *temp, *a;
    temp = head;
    a = (struct node *)malloc(sizeof(struct node));
    printf("Enter the node you want to insert in the begining:\n");
    scanf("%d", &a->data);
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = a;
    a->prev = temp;
    a->next = head;
    head->prev = a;
    head = a;
}
void end_insert()
{
    struct node *temp, *a;
    temp = head;
    a = (struct node *)malloc(sizeof(struct node));
    printf("Enter the node you want to insert at the end:\n");
    scanf("%d", &a->data);
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = a;
    a->prev = temp;
    a->next = head;
    head->prev = a;
}
void position()
{
    int n;
    printf("Enter the position to insert the node");
    scanf("%d", &n);
    struct node *temp, *a;
    temp = head;
    a = (struct node *)malloc(sizeof(struct node));
    printf("Enter the node you want to insert at the %dth position:\n", n);
    scanf("%d", &a->data);
    for (int i = 1; i < n - 1; i++)
    {
        temp = temp->next;
    }
    a->next = temp->next;
    a->prev = temp;
    temp->next = a;
}
void after_element()
{
    int n;
    printf("Enter the element after which the node should be added");
    scanf("%d", &n);
    struct node *temp, *a;
    temp = head;
    a = (struct node *)malloc(sizeof(struct node));
    printf("Enter the node you want to insert after the element %d:\n", n);
    scanf("%d", &a->data);
    while (temp->data != n)
    {
        temp = temp->next;
    }
    a->next = temp->next;
    a->prev = temp;
    temp->next = a;
}
void delete_begining()
{
    struct node *temp, *temp1;
    temp = head;
    temp1 = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    head = head->next;
    free(temp1);
    temp1 = NULL;
    temp->next = head;
    head->prev = temp;
}
void delete_end()
{
    struct node *temp, *temp1;
    temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp1 = temp->prev;
    free(temp);
    temp = NULL;
    temp1->next = head;
    head->prev = temp1;
}
void delete_position()
{
    int n;
    printf("Enter the position you want to delete the node");
    scanf("%d", &n);
    struct node *temp, *temp1, *temp2;
    temp = head;
    for (int i = 1; i < n; i++)
    {
        temp = temp->next;
    }
    temp1 = temp->prev;
    temp2 = temp->next;
    free(temp);
    temp = NULL;
    temp1->next = temp2;
    temp2->prev = temp1;
}
void display()
{
    int n = 1;
    struct node *temp;
    temp = head;
    do
    {
        printf("node[%d]=%d\n", n, temp->data);
        temp = temp->next;
        n++;
    } while (temp != head);
}
int main()
{
    int n;
    printf("Enter the no of nodes u want");
    scanf("%d", &n);
    struct node *temp;
    for (int i = 0; i < n; i++)
    {
        struct node *a = (struct node *)malloc(sizeof(struct node));
        printf("Enter the %dth node", i + 1);
        scanf("%d", &a->data);
        if (i == 0)
        {
            head=a;
            temp = head;
        }
        else
        {
            temp->next = a;
            a->prev = temp;
            a->next = head;
            temp = temp->next;
        }
    }
    display();
    int choice;
    do
    {
        printf("\n-----choose from below-----\n");
        printf("1.Insert a node at the begining\n");
        printf("2.Insert a node at the end\n");
        printf("3.Insert a node at the any other position\n");
        printf("4.Insert a node after an element\n");
        printf("5.Delete the node at the begining\n");
        printf("6.Delete the node at the end\n");
        printf("7.Delete the node at any other position\n");
        printf("8.Not intrested\n");
        printf("Enter your choice");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            beg_insert();
            display();
            break;
        case 2:
            end_insert();
            display();
            break;
        case 3:
            position();
            display();
            break;
        case 4:
            after_element();
            display();
            break;
        case 5:
            delete_begining();
            display();
            break;
        case 6:
            delete_end();
            display();
            break;
        case 7:
            delete_position();
            display();
            break;
        
        default:
        printf("INVALID INPUT");
            break;
        }

    } while (choice<=7);
    return 0;
    
}
