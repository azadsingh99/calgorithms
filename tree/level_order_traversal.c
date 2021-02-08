#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};


struct node *insert(struct node *head)
{
    struct node *temp = NULL, *parent = NULL, *current = NULL;

    while(1)
    {
        temp = (struct node *)malloc(sizeof(struct node *));
        printf("Enter the node into the Tree\n");
        scanf("%d", &temp->data);
        temp->left = temp->right = NULL;

        if(temp->data == 0)
            break;
        
        if(head == NULL)
            head = temp;
        
        else
        {
            current = head;
            while(current){
                parent = current;

                if(temp->data > current->data)
                    current = current->right;
                
                else
                    current = current->left;
            }

            if(temp->data > parent->data)
                parent->right = temp;
            
            else
                parent->left = temp;

        }
    }

    return head;
}

void traverse(struct node *head)
{
    struct node *temp, *current;

    temp = head;
    printf("%d ", temp->data);
    while(temp)
    {
        current = temp;

        if(temp->left != NULL)
            printf("%d ", temp->left->data);
        
        else if(temp->right != NULL)
            printf("%d ", temp->right->data);
        
        if(temp->left != NULL)
            temp = temp->left;
        
        else if(temp->right != NULL)
            temp = temp->right;
    }
    

}
int main()
{
    struct node *head = NULL;

    head = insert(head);
    traverse(head);
}