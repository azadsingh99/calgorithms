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
int search_for_node(struct node *temp, int key)
{
    if(temp == NULL)
    {
        return 0;
    }

    if(temp->data == key)
    {
        return 1;
    }

    else if(temp->data > key)
    {
        search_for_node(temp->left, key);
    }

    else
    {
        search_for_node(temp->right, key);
    }
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

int loop_search(struct node *temp, int key)
{
    while(temp != NULL){

        if(temp->data == key)
        {
            return 1;
        }

        else if(temp->data > key)
        {
            temp = temp->left;
        }

        else
        {
            temp = temp->right;
        }
    }

    return 0;
} 
int main()
{
    struct node *head = NULL;
    int val;

    head = insert(head);
    traverse(head);
    printf("\n");

    printf("Enter the node to be searched:\n");
    scanf("%d", &val);
    
    int result = search_for_node(head, val);
    if(result)
    {
        printf("Element is Present\n");
    }

    else
    {
        printf("Element is not Present\n");
    }  

    result = loop_search(head, val);
    if(result)
    {
        printf("Element is Present\n");
    }

    else
    {
        printf("Element is not Present\n");
    }  


}