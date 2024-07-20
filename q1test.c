//Find largest element in a linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert(struct node **head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = *head;
    *head = temp;
}

int largest(struct node *head)
{
    int max = head->data;
    while (head != NULL)
    {
        if (head->data > max)
            max = head->data;
        head = head->next;
    }
    return max;
}

int main()
{
    struct node *head = NULL;
    int n, i, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the data: ");
        scanf("%d", &data);
        insert(&head, data);
    }
    printf("Largest element is %d", largest(head));
    return 0;
}