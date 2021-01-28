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
struct node *insert_at_last(struct node *head)
{
    struct node *temp, *p;
    int val;

    printf("Enter the node to be added at Last:\n");
    scanf("%d", &val);

    temp = head;
    while(temp){
        p = temp;
        temp = temp->right;
    }

    temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;
    p->right = temp;
    temp->left = p;

    return head;
}

struct node *insert_at_middle(struct node *head)
{


    struct node *temp, *p, *q ;
    int val, position, count = 0;

    temp = head;
    while(temp)
    {
        count++;
        temp = temp->right;
    }

    printf("Enter the Position where you wanna insert the node\n");
    scanf("%d", &position);

    if(position > count) {
        printf("Invalid Position\n");
        return head;
    }

    printf("Enter the node to be inserted into the Linked List:\n");
    scanf("%d", &val);

    p = (struct node *)malloc(sizeof(struct node *));
    p->data = val;

    int i=0;
    temp = head;
    while(i < position)
    {
        temp = temp->right;
        i++;
    }

    q = temp->left;
    p->right = temp;
    temp->left = p;
    p->left = q;
    q->right = p;

    return head;
}
int main()
{
    struct node *head = NULL;

    head = insert(head);
    traverse(head);

    head = insert_at_begin(head);
    traverse(head);

    head = insert_at_last(head);
    traverse(head);

    head = insert_at_middle(head);
    traverse(head);
}