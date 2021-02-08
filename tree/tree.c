#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert_node(struct node *head)
{
    struct node *temp, *parent, *current;

    while(1)
    {
        printf("Enter the node to be inserted into the Linekdlist\n");
        scanf("%d", &temp->data);

        if(temp->data == 0)
            break;
        
        else
        {
            if(head == NULL)
                head = temp;
            
            else
            {
                current = head;
                while(current){

                }
            }
        }
    }
}
int main()
{
    struct node *head = NULL;

    head = insert_node(head);
}