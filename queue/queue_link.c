#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*front = NULL, *rear = NULL;

void enqueue(int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node *));

    if(temp == NULL)
    {
        printf("Queue is Full\n");
        return;
    }

    temp->data = val;
    temp->next = NULL;

    if(front == NULL)
        front = rear = temp;
    
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void dequeue()
{
    struct node *temp;

    temp = front;
    front = front->next;
    free(temp);

}

void traverse()
{
    struct node *temp = front;

    while(temp){
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
        printf("Options are:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("\n");

        printf("Choose the option : ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                    printf("Enter the value to be inserted into the queue\n");
                    scanf("%d", &val);

                    enqueue(val);
                    break;
            
            case 2:
                    dequeue();
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
}