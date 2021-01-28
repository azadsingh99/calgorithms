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
        printf("Enter the node into the Linked List:\n");
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
                while(temp){
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

struct node *add_at_begin(struct node *head)
{
    struct node *temp, *p;
    int val;

    p = head->left;

    printf("Enter the node to be added at the beginning:\n");
    scanf("%d", &val);

    temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;

    temp->right = head;
    temp->left = p;
    p->right = temp;
    head->left = temp;
    head = temp;
    
    return head;
}
void print_list(struct node *head)
{
    struct node *temp = head;

   
   do{
       printf("%d ", temp->data);
       temp = temp->right;
   }while(temp != head);

   printf("\n");

}

struct node *add_at_last(struct node *head)
{
    struct node *temp, *p;
    int val;

    printf("Enter the data to inserted at Last:\n");
    scanf("%d", &val);

    temp = head;
    
    do{
        temp = temp->right;
    }while(temp->right != head);

    p = (struct node *)malloc(sizeof(struct node *));
    p->data = val;

    p->left = temp;
    temp->right = p;
    p->right = head;
    head->left = p;

    return head;
}

struct node *add_at_middle(struct node *head)
{
    struct node *temp, *p, *q;
    int count=0, val, position;

    temp = head;

    do{
        count++;
        temp = temp->right;
    }while(temp != head);

    printf("Enter the position to insert node:\n");
    scanf("%d", &position);

    if(position > count)
    {
        printf("Invalid Position\n");
        return head;
    }

    printf("Enter the node to be inserted into the Linked List:\n");
    scanf("%d", &val);

    int i=0; 
    temp = head;
    while(i < position)
    {
        p = temp;
        temp = temp->right;
        i++;
    }

    q = (struct node *)malloc(sizeof(struct node *));
    q->data = val;

    q->right = temp;
    temp->left = q;

    q->left = p;
    p->right = q;

    return head;

}

void reverse_linklist(struct node *head)
{
    struct node *temp;

    temp = head;

    do{
        temp = temp->right;
    }while(temp->right != head);

    while(temp != head)
    {
        printf("%d ", temp->data);
        temp = temp->left;
    }

}
int main()
{
    struct node *head = NULL;
    int option;


    while(1)
    {
        printf("\n");
        printf("1. Insert Nodes\n");
        printf("2. Add at Begin\n");
        printf("3. Add at Last\n");
        printf("4. Add at any position\n");
        printf("5. Reverse Linklist\n");
        printf("6. Travese Linklits\n");
        printf("7. Exit\n");
        printf("\n");
        printf("Choose the option\n");
        scanf("%d", &option);

        switch(option)
        {

            case 1:
                    head = insert(head);
                    break;

            case 2:
                    head = add_at_begin(head);
                    break;
            
            case 3:
                    head = add_at_last(head);
                    break;
            
            case 4:
                    head = add_at_middle(head);
                    break;

            case 5:
                    reverse_linklist(head);
                    break;

            case 6:
                    print_list(head);
                    break;
            
            case 7:
                    exit(0);
            
            default:
                    printf("Invalid Option\n");
            
        
        }
    }
}