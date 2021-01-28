#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *temp, int key)
{
    struct node *p;

    if(temp == NULL)
    {
        p = (struct node *)malloc(sizeof(struct node *));
        p->data = key;
        p->left = p->right = NULL;
        return p;
    }

    if(temp->data > key)
    {
        temp->left = insert(temp->left, key);
    }

    else
    { 
       temp->right = insert(temp->right, key);
    }

    return p;
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
    int key;

     
    while(1)
    {
        scanf("%d", &key);

        if(key == 0)
            break;

        head = insert(head, key);
    }

    traverse(head);
    printf("\n");

}