#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *head)
{
    struct node *temp, *current, *parent;

    while(1)
    {
        temp = (struct node *)malloc(sizeof(struct node *));
        printf("Enter the value to be inserted into the node\n");
        scanf("%d", &temp->data);
        temp->left = temp->right = NULL;

        parent = head;
        if(temp->data == 0)
        {
            break;
        }

        else
        {
            if(head == NULL)
            {
                head = (struct node *)malloc(sizeof(struct node *));
                head = temp;
            }

            else
            {
                current = head;
                while(current) {
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

struct node *insert_into_bst(struct node *head)
{
    struct node *temp, *parent, *current;

    temp = (struct node *)malloc(sizeof(struct node *));
    printf("Enter the node to be inserted into the Tree\n");
    scanf("%d", &temp->data);

    current = head;
    while(current){
        parent = current;

        if(temp->data > current->data)
        {
            current = current->right;
        }

        else{
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

    return head;
}
void traverse(struct node *temp)
{
    if(temp == NULL)
    {
        return;
    }

    traverse(temp->left);
    printf("%d ", temp->data);
    traverse(temp->right);
}
int main()
{
    struct node *head = NULL;

    head = insert(head);
    traverse(head);

    head = insert_into_bst(head);
    traverse(head);
}