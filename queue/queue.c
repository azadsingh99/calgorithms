#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};
int isfull(struct queue *que)
{
    if(que->rear == (que->size-1))
    {
        printf("Queue is Full\n");
        return 1;
    }

    return 0;

}

int isempty(struct queue *que)
{
    if(que->front == que->rear)
    {
        printf("Queue is Empty\n");
        return 1;
    }

    return 0;
}
void inqueue(struct queue *que, int val)
{
    if(isfull(que))
    {   
        return;
    }

    else
    {
        que->rear++;
        que->arr[que->rear] = val;
    }
}

void traverse(struct queue *que)
{
    if(isempty(que))
    {
        return;
    }
    
    printf("Displaying the Queue ELements ::\n");
    for(int i=que->front+1; i<=que->rear; i++)
    {
            printf("%d ", que->arr[i]);
    }

    printf("\n");
}

void dequeue(struct queue *que)
{
    if(isempty(que))
    {
        return;
    }

    que->front++;
    
}
int main()
{
    struct queue *que;

    printf("Enter the size of the Queue:\n");
    scanf("%d", &que->size);

    que->front = que->rear = -1;

    que->arr = (int *)malloc(que->size * sizeof(int *));
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
                        printf("Enter the element to be inserted into the queue\n");
                        scanf("%d", &val);
                        inqueue(que, val);
                        break;
            
            case 2:
                        dequeue(que);
                        break;

            case 3:
                        traverse(que);
                        break;

            case 4:
                        exit(0);

            default:
                        printf("Invalid Option\n");
        }
    }
}