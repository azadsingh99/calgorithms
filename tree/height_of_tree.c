#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *head = NULL;

struct node *insert(struct node *head)
{
    struct node *temp, *current, *parent;

    while(1)
    {
        temp = (struct node *)malloc(sizeof(struct node *));
        printf("Enter the node into the tree\n");
        scanf("%d", &temp->data);

        if(temp->data == 0)
            break;
        
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

int height(struct node *temp)
{
    int x,y;

    if(temp == NULL)
        return 0;
    
    x = height(temp->left);
    y = height(temp->right);

    return x>y?x+1:y+1;
}
void traverse(struct node *temp)
{
    if(temp != NULL){
        traverse(temp->left);
        printf("%d ", temp->data);
        traverse(temp->right);
    }
}

struct node *InPre(struct node *temp)
{
    while(temp && temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp;
}

struct node *InSuc(struct node *temp)
{
    while(temp && temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp;
}

struct node *delete_node(struct node *temp, int key)
{
    struct node *p;

    if(temp == NULL)
        return NULL;
    
    if(temp->left == NULL && temp->right == NULL)
    {
        if(temp == head)
            head = NULL;
        free(temp);
        return NULL;
    }

    if(key > temp->data)
    {
        temp = delete_node(temp->right, key);
    }

    else if(key < temp->data)
    {
        temp = delete_node(temp->left, key);
    }

    else
    {
        if(height(temp->left) > height(temp->right))
        {
            p = InPre(temp->left);
            temp->data = p->data;
            temp->left = delete_node(temp->left, p->data);
        }

        else
        {
            p = InSuc(temp->right);
            temp->data = p->data;
            temp->right = delete_node(temp->right, p->data);
        }
    }

    return temp;
}
int main()
{
    int key;

    head = insert(head);
    traverse(head);
    printf("\n");

    int x = height(head);

    if(x)
    {
        printf("Height of BST is :: %d\n", x);
    }

    printf("Enter the node to be deleted:\n");
    scanf("%d", &key);

    delete_node(head, key);
    traverse(head);
    printf("\n");

    return 0;
}