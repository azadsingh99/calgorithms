#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

int isempty(struct node *head)
{
    if(head == NULL)
    {
        printf("Queue is Empty\n");
        return 1;
    }

    return 0;
}
struct node *insert(struct node *head, int val)
{
    struct node *temp, *p;

     if(head == NULL)
     {
        head = (struct node *)malloc(sizeof(struct node *));
        head->data = val;
     }

     else
     {
        temp = (struct node *)malloc(sizeof(struct node *));
        temp->data = val;
        temp->next = head;
        head = temp;
     }

     return head;
}

struct node *delete(struct node *head)
{
    struct node *temp;

    if(isempty(head))
    {
        return head;
    }     

    temp = head->next;
    free(head);
    head = temp;
}

void traverse(struct node *head)
{
    struct node *temp = head;

    if(isempty(head))
    {
        return;
    }
    
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}
int main()
{
    struct node *head;
    int option, val;

    while(1)
    {
        printf("Choose the option:\n");
        printf("1.Insert Into Queue\n");
        printf("2.Delete From Queue\n");
        printf("3.Traverse a Queue\n");
        printf("4.Exit\n");
        printf("\n");

        scanf("%d", &option);

        switch(option)
        {
            case 1:
                    printf("Enter the value into the Node:\n");
                    scanf("%d", &val);
                    head = insert(head, val);
                    break;

            case 2:
                    head = delete(head);
                    break;
            
            case 3:
                    traverse(head);
                    break;

            case 4:
                    exit(0);

            default:
                    printf("Invalid Option\n");

        }
    
    }
    return 0;
}