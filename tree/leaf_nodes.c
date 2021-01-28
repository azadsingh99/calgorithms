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

    parent = head;

    while(1)
    {
        printf("Enter the node to be inserted into the Tree:\n");
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
int traverse(struct node *temp)
{
    int a = -1,b = -1;
    static int  count = 0;
    if(temp != NULL)
    {
        printf("%d ", temp->data);
        a = traverse(temp->left);
        b = traverse(temp->right);
    }

    if(a==0 && b==0)
    {
        count++;
    }

    return count;
}

int main()
{
    struct node *head = NULL;
    int count;
    head = insert(head);
    count = traverse(head);
    printf("\n");

    printf("Leaf Nodes are :::: %d\n", count);
}