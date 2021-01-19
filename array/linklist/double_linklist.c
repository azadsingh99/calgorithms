#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert_node(struct node *head)
{
    struct node *temp, *p;
    int val;
    while(1)
    {
        printf("Enter the value to be inserted into the node\n");
        scanf("%d", &val);

        if(val == 0)
        {
            return head;
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
                while(temp) {
                    temp = temp->right;
                }
                temp = (struct node *)malloc(sizeof(struct node *));
                temp->data = val;
                p->right = temp;
                temp->left = p;
                p= temp;
            }
        }
    }
}

struct node *add_at_begin(struct node *head)
{
    struct node *temp = NULL;

    temp = (struct node *)malloc(sizeof(struct node *));
    printf("Enter the node to be added at the beginning\n");
    scanf("%d", &temp->data);

    temp->right = head;
    head->left = temp;
    head = temp;
    return head;
}
void print_list(struct node *temp)
{
    while(temp) {
        printf("%d ", temp->data);
        temp = temp->right;
    }
}

void add_at_last(struct node *head)
{
    struct node *temp, *p;

    p = (struct node *)malloc(sizeof(struct node *));
    printf("Enter the node to be inserted at last\n");
    scanf("%d", &p->data);

    temp = head;
    while(temp) {
        temp = temp->right;
    }

    temp->data;

}
int main()
{
    struct node *head;
    int option;

    head = insert_node(head);
    print_list(head);
    printf("\n");

    printf("1. Add at Begin\n");
    printf("2. Add at Last\n");
    printf("3. Add at any position\n");
    printf("4. Reverse Linklist\n");

    printf("Choose the option\n");
    scanf("%d", &option);

    switch(option)
    {

        case 1:
                head = add_at_begin(head);
        
        case 2:
                add_at_last(head);
    
    }

    print_list(head);
    printf("\n");
}