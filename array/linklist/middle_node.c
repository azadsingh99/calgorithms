#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void insert_into_linklist(struct node* head)
{
    struct node *temp, *p;
    int val;

    while(1)
    {
        printf("Enter the value into the linkedlist\n");
        scanf("%d", &val);

        if(val == 0)
        {
            return;
        }

        if(head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node *));
            head->data = val;
            head->next = NULL;
            p = head; 
        }

        else
        {
            temp = (struct node *)malloc(sizeof(struct node *));
            temp->data = val;
            temp->next = NULL;
            p->next = temp;
            p = temp;
        }
        
    }
}

void print_linklist(struct node* head)
{
    struct node *temp = head;
    while(temp)
    {
         
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL;
    insert_into_linklist(head);
    print_linklist(head);
    return 0;
}
