#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert_node(struct node *temp, int key)
{
    struct node *p;

    if(temp == NULL)
    {
        p = (struct node *)malloc(sizeof(struct node *));
        p->data = key;
        p->left = p->right = NULL;
        return p;
    }

    
    if(key > temp->data)
    {
            temp->right = insert_node(temp->right, key);
    }

    else
    {
        temp->left = insert_node(temp->left, key);
    }

    return p;
}

void traverse(struct node *temp)
{
    if(temp != NULL){
        traverse(temp->left);
        printf("%d ", temp->data);
        traverse(temp->right);
    }
}
int main()
{
    struct node *head;
    int key;

    while(1)
    {
        scanf("%d", &key);

        if(key == 0)
        {
            break;
        }

        head = insert_node(head, key);
    }     

    traverse(head);
    printf("\n");
}