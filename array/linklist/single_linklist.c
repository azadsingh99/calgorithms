#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void insert_data(struct node *head)
{
    struct node *temp, *p;
    int num;

    while(1)
    {
        printf("Enter the data into the LinkedList\n");
        scanf("%d", &num);

        if(num == 0)
        {
            return;
        }

        if(head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node *));
            head = num;
        }

        else
        {
            temp = (struct node *) malloc(sizeof(struct node *));
            temp = p = head;
            while(temp != NULL)
            {
                temp = temp->next;
            }

            temp->data = num;
            p->next = temp;
        }
        
    }
}

void display(struct node *head)
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL;

    insert_data(head);
    display(head);
}