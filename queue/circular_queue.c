#include<stdio.h>
#include<stdlib.h>
struct node {
    int size;
    int front;
    int rear;
    int *arr;
};

int isempty(struct node *st)
{
    if(st->front == st->rear)
    {
        printf("Queue is Empty\n");
        return 1;
    }

    return 0;
}
int isfull(struct node *st)
{
    if((st->rear+1) % st->size == st->front)
    {
        printf("Queue is Full\n");
        return 1;
    }

    return 0;
}
void insert(struct node *st, int val)
{
    if(isfull(st))
    {
        return;
    }

    else
    {
        st->rear = (st->rear + 1) % st->size;
        st->arr[st->rear] = val;
    }
}

void delete(struct node *st)
{
    if(isempty(st))
    {
        return;
    }

    else
    {
        st->front = (st->front + 1) % st->size;
        int x = st->arr[st->front];

        printf("Deleted Element is :::: %d\n", x);
    }
}

void traverse(struct node *st)
{
    for(int i=st->front; i<=st->rear; i++)
    {
        printf("%d ", st->arr[i]);
    }

    printf("\n");
}
int main()
{
    struct node *st;

    int option, val;

    printf("Enter the size of the queue:\n");
    scanf("%d", &st->size);

    st->arr = (int *)malloc(st->size * sizeof(int *));

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
                    insert(st, val);
                    break;

            case 2:
                    delete(st);
                    break;
            
            case 3:
                    traverse(st);
                    break;

            case 4:
                    exit(0);

            default:
                    printf("Invalid Option\n");

        }
    
    }
    return 0;
}