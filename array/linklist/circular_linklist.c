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
    do {
        temp = temp->right;
    }while(temp != head);

    printf("Temp Data :::: %d\n", temp->data);
    p = (struct node *)malloc(sizeof(struct node *));
    p->data = val;

    temp->right = p;
    p->left = temp;
    p->right = head;
    head->left = p;
    return head;

}
int main()
{
    struct node *head = NULL;
    int option;


    while(1)
    {
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