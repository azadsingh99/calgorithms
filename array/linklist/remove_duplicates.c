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
        printf("Enter the node into the linked list\n");
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
                while(temp) {
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
    while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

struct node *remove_duplicates(struct node *head)
{
    struct node *temp, *p, *q;
    temp = p = head;

    while(temp){
        p = temp->next;
        while(p)
        {
            if(temp->data == p->data)
            {
                q = head;
                while(q->next != p)
                {
                    q = q->next;
                }

                q->next = p->next;
                free(p);
                p = q;
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

    printf("All Duplicates are Removed:: ");
    head = remove_duplicates(head);
    traverse(head);
}