#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *insert(struct node *head)
{
    struct node *temp, *p;
    int val;

    while(1)
    {
        printf("Enter the node into the Linked List\n");
        scanf("%d", &val);

        if(val == 0)
        {
            break;
        }

        else
        {
            if(head == NULL)
            {
                head = (struct node *)malloc(sizeof(struct node *));
                head->data = val;
                p = head;
            }

            else
            {
                temp = head;
                while(temp){
                    temp = temp->next;
                }
                temp = (struct node *)malloc(sizeof(struct node *));
                temp->data = val;
                p->next = temp;
                p = temp;
            }
        }
    }

    return head;
}

void traverse(struct node *temp)
{
    while(temp){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

struct node *sorting_linklist(struct node *head)
{
    struct node *temp, *p;
    int num;

    temp = p = head;
    while(temp)
    {
        p = temp->next;
        while(p){
            if(temp->data > p->data)
            {
                num = temp->data;
                temp->data = p->data;
                p->data = num;
            }

            p = p->next;
        }

        temp = temp->next;
    }

    return head;
}
int main()
{
    struct node *head = NULL;

    head = insert(head);
    traverse(head);
    head = sorting_linklist(head);
    printf("Sorted Linklist is :::: ");
    traverse(head);
}