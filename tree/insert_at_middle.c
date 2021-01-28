#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *head)
{
    struct node *temp, *parent, *current;

    while(1)
    {
        printf("Enter the node to be inserted into the tree:\n");
        temp = (struct node *)malloc(sizeof(struct node *));
        scanf("%d", &temp->data);
        temp->left = temp->right = NULL;

        if(temp->data == 0)
        {
            break;
        }

        else
        {
            if(head == NULL)
            {
                head = temp;
            }

            else
            {
                current = head;
                while(current){
                    parent = current;

                    if(temp->data > current->data)
                    {
                        current = current->right;
                    }

                    else
                    {
                        current = current->left;
                    }
                }

                if(temp->data > parent->data)
                {
                    parent->right = temp;
                }

                else
                {
                    parent->left = temp;
                }
            }
        }
    }
    return head;
}

struct node *insert_at_middle(struct node *head)
{
    struct node *temp, *parent, *current;

    printf("Enter the node to be inserted into the tree:\n");
    temp = (struct node *)malloc(sizeof(struct node *));
    scanf("%d", &temp->data);

    current = head;
    while(current)
    {
        parent = current;
        if(temp->data > current->data)
        {
            current = current->right;
        }

        else
        {
            current = current->left;
        }

        if(temp->data > parent->data)
        {
            parent->right = temp;
        }

        else
        {
            parent->left = temp;
        }
    }

    return head;
}
void traverse(struct node *temp)
{
    if(temp != NULL)
    {
        traverse(temp->left);
        printf("%d ", temp->data);
        traverse(temp->right);
    }
}
int main()
{
    struct node *head = NULL;

    head = insert(head);
    traverse(head);
    printf("\n");

    head = insert_at_middle(head);
    traverse(head);
    printf("\n");
}