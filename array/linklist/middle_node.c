#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node * insert_into_linklist(struct node* head)
{
    struct node *temp = NULL, *p = NULL;
    int val;

    while(1)
    {
        printf("Enter the value into the linkedlist\n");
        scanf("%d", &val);

        if(val == 0)
        {
             return head;
        }

        if(head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node *));
            head->data = val;
            head->left = NULL;
            head->right = NULL;
            p = head; 
        }

        else
        {
            temp = (struct node *)malloc(sizeof(struct node *));
            temp->data = val;
            temp->next = NULL;
            p->next = temp;
            p = temp;
        }   
    }

}

void print_linklist(struct node* head)
{
    struct node *temp = head;
    while(temp)
    {
         
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL;
    head = insert_into_linklist(head);

    print_linklist(head);
    return 0;
}
