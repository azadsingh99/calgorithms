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
        temp = (struct node *)malloc(sizeof(struct node *));
        printf("Enter the Data into the Binary Tree::\n");
        scanf("%d",&temp->data);
    
        temp->right = NULL;
        temp->left = NULL;
    
        parent = head;

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

int count_nodes(struct node *temp)
{
    int x, y;

    if(temp != NULL)
    {
        x = count_nodes(temp->left);
        y = count_nodes(temp->right);

        return x+y+1;
    }

    return 0;
}
int main()
{
    struct node *head = NULL;
    int count;

    head = insert(head);
    traverse(head);
    printf("\n");
    count = count_nodes(head);
    printf("Total Number of Nodes are : %d\n", count);

}