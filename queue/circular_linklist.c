#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
}*front = NULL, *rear = NULL;

void insert(int x)
{
    struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node *));
    if(temp == NULL)
    {
        printf("Queue is Full\n");
    }

    else
    {
        temp->data = x;
        temp->next = NULL;
        if(front == NULL)
        {
            front = rear = temp;
        }

        else
        {
            rear->next= temp;
            rear = temp;
        }
    }
}

int delete()
{
    struct node *temp;
    int x;

    if(front == NULL)
    {
        printf("Queue is Empty\n");
    }

    else
    {
        temp = front;+5
        x = temp->data;
        temp = front;
        front = front->next;
    }

    return x;
}

void traverse()
{
    struct node *temp = front;

    while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}
int main()
{
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
                    insert(val);
                    break;

            case 2:
                    printf("Deleted Element is :::: %d\n", delete());
                    break;
            
            case 3:
                    traverse();
                    break;

            case 4:
                    exit(0);

            default:
                    printf("Invalid Option\n");

        }
    
    }
    return 0;
}