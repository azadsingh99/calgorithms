#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    int height;
    struct node *left;
    struct node *right;
};

int height(struct node *temp)
{
    int hl, hr;

    hl = temp && temp->left ? temp->left->height:0;
    hr = temp && temp->right ? temp->right->height:0;

    return hl>hr?hl+1:hr+1;

}
struct node *insert_nodes(struct node *head)
{
    struct node *temp, *parent, *current;
    while(1)
    {
        temp = (struct node *)malloc(sizeof(struct node *));
        printf("Enter the node to be inserted\n");
        scanf("%d", &temp->data);

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

                    if(temp->data > parent->data)
                    {
                        current = current->right;
                    }

                    else
                    {
                        current = current->left;
                    }
                }

                if(temp->data > parent->data)
                    parent->right = temp;
                
                else
                    parent->left = temp;
                
                temp->height = height(temp);
                if(balance_factor(temp) == 2 && balance_factor(temp->left) == 1)
                    return LLRotaion(temp);
                
                else if(balance_factor(temp) == 2 && balance_factor(temp->right) == -1)
                   return LRRotation(temp);
                
                else if(balance_factor(temp) == -2 && balance_factor(temp->left) == -1)
                    return RRRotation(temp);
                
                else if(balance_factor(temp) == -2 && balance_factor(temp->right) == 1)
                    return RLRotation(temp);
            }
        }
    }

    return head;
}
int main()
{
    struct node *head = NULL;

    head = insert_nodes(head);

}