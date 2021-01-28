#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *head)
{
    struct node *temp, *p;
    int val;

    while(1)
    {
        printf("Enter the data into the Linkedlist\n");
        scanf("%d", &val);

        if(val == 0)
        {
            break;
        }

        else
        {
            if(head == NULL)
            {
                head = (struct node *)malloc(sizeof(struct node *));
                head->data = val;
                p = head;
            }

            else
            {
                temp = head;
                while(temp)
                {
                    temp = temp->right;
                }

                temp = (struct node *)malloc(sizeof(struct node *));
                temp->data = val;
                p->right = temp;
                temp->left = p;
                p = temp;
            }
        }
    }

    p->right = head;
    head->left = p;
    return head;
}

void traverse(struct node *head)
{
    struct node *temp = head;
    do{
        printf("%d ", temp->data);
        temp = temp->right;
    }while(temp != head);

    printf("\n");
}

struct node *sort_linklist(struct node *head)
{
    struct node *temp, *p;
    int num;
    temp = head;

    do{
        p = temp->right;
        do {
            if(temp->data > p->data)
            {
                num = temp->data;
                temp->data = p->data;
                p->data = num;
            }
            p = p->right;
            printf("%d ", temp->data);
        }while(p != head);

        temp = temp->right;
    }while(temp != head);

    return head;
}
int main()
{
    struct node *head = NULL;

    head = insert(head);
    traverse(head);

    sort_linklist(head);
    printf("Sorted Linklist::: ");
    traverse(head);

}