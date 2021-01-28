#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *head)
{
    struct node *temp, *p;
    int val;

    while(1)
    {
        printf("Enter the node into the Linked List: ");
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
                    temp = temp->right;
                }

                temp = (struct node *)malloc(sizeof(struct node *));
                temp->data = val;
                p->right = temp;
                temp->left = p;
                p = temp;
            }
        }
    }

    return head;
}

struct node *insert_at_begin(struct node *head)
{
    int data;
    struct node *temp;

    printf("Enter the node to be added at the beginning:\n");
    scanf("%d", &data);

    temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = data;

    temp->right = head;
    head->left = temp;
    head = temp;

    return head;
}
void traverse(struct node *temp)
{
    while(temp){
        printf("%d ", temp->data);
        temp = temp->right;
    }

    printf("\n");
}

struct node *reverse(struct node *head)
{
    struct node *temp, *p;

    temp = head;
    while(temp->right){
        temp = temp->right;
    }

    printf("Reversed Linklist is ::: ");
    
    while(temp)
    {
        printf("%d ", temp->data);
        temp = temp->left;
    }
    printf("\n");

}
int main()
{
    struct node *head = NULL;

    head = insert(head);
    traverse(head);

    head = reverse(head);
}