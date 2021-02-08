#ifndef queue_h
#define queue_h
#include<stdio.h>
#include<stdlib.h>
struct node {
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

    else
    {
        temp->data = val;
        temp->next = NULL;

        if(front == NULL)
        {
            front = rear = temp;
        }

        else
        {
            rear->next = temp;
            rear = temp;
        }
    }

}

int dequeue()
{
    int x = -1;
     struct node *temp;

     if(front == NULL)
        printf("Queue is Empty\n");
    
     else
     {
        temp = front;
        x = temp->data;
        front = front->next;
        free(temp);
         
     }

     return x;
}
void Display()
{
    struct node *p=front;

    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }

    printf("\n");
}

int isEmpty()
{
    return front == NULL;
}

#endif 