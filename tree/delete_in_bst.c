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
        printf("Enter the data to be inserted into the tree:\n");
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

                printf("Parent Data is ::: %d\n", parent->data);
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

void traverse(struct node *temp)
{
    if(temp != NULL)
    {
        traverse(temp->left);
        printf("%d ", temp->data);
        traverse(temp->right);
    }
}

struct node *delete_leaf_node(struct node *head)
{
    struct node *temp, *parent, *current;

    parent = head;
    printf("Enter the data to be Deleted from the tree:\n");
    temp = (struct node *)malloc(sizeof(struct node *));
    scanf("%d", &temp->data);

    current = head;
    while(current->left != NULL && current->right != NULL){
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

    printf("Parent Data ::: %d Temp Data :::: %d\n", parent->data, current->data);
    if(temp->data  > parent->data)
    {
        parent->right = NULL;
        free(temp);
    }

    else
    {
        parent->left = NULL;
        free(temp);
    }

    return head;
}
int main()
{
    struct node *head = NULL;

    head = insert(head);
    traverse(head);
    printf("\n");

    head = delete_leaf_node(head);
    traverse(head);
}