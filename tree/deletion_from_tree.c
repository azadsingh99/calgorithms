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
        printf("Enter the node to be inserted into the Linked List\n");
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
struct Node *InPre(struct node *p)
{
    while(p && p->right !=NULL)
        p=p->right;
    
    return p;
}

struct Node *InSucc(struct node *p)
{
    while(p && p->left!=NULL)
        p=p->left;
    
    return p;
}

int height(struct node *p)
{
    int x,y;
    if(p==NULL)return 0;
    x=height(p->left);
    y=height(p->right);

    return x>y?x+1:y+1;
}
struct node *delete_node(struct node *head, struct node *temp, int key)
{
    struct node *p;

    if(temp == NULL)
    {
        return head;
    }

    if(temp->left==NULL && temp->right==NULL)
    {
        if(p == head)
        {
            head = NULL;
        }

        free(temp);
        return head;
    }
    if(key > temp->data)
    {
        temp->right = delete_node(head, temp->right, key);
    }

    else if(key < temp->data)
    {
        temp->left = delete_node(head, temp->left, key);
    }

    else
    {
        if(height(temp->left) > height(temp->right))
        {
            p = InPre(temp->left);
            temp->data = p->data;
            temp->left = delete_node(head, temp->left, p->data);
        }

        else
        {
            p = InSucc(temp->right);
            temp->data = p->data;
            temp->right = delete_node(head, temp->left, p->data);
        }
    }

    return head;
}
void traversal(struct node *temp)
{
    if(temp != NULL)
    {
        traversal(temp->left);
        printf("%d ", temp->data);
        traversal(temp->right);
    }
}
int main()
{
    struct node *head = NULL;
    int key;

    head = insert(head);
    traversal(head);

    printf("\n");

    printf("Enter the node to be deleted from the tree:\n");
    scanf("%d", &key);

    head = delete_node(head, head, key);
    traversal(head);

}