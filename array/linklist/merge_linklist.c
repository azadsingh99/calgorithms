#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *insert(struct node *head)
{
    struct node *temp, *p;
    int val;

    while(1)
    {
        printf("Enter the node into the Linked List\n");
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
                    temp = temp->next;
                }

                temp = (struct node *)malloc(sizeof(struct node *));
                temp->data  = val;
                p->next = temp;
                p = temp;
            }
        }
    }

    return head;
}

void traverse(struct node *temp)
{
    while(temp){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

struct node *merge_list(struct node *head1, struct node *head2)
{
    struct node *temp;

    temp = head1;
    while(temp->next){
        temp = temp->next;
    }

    temp->next = head2;
    return head1;
}
int main()
{
    struct node *head1 = NULL, *head2 = NULL;

    head1 = insert(head1); 
    head2 = insert(head2);

    printf("Elements of Link1 :: ");
    traverse(head1);
    printf("Elements of Link2 :: ");
    traverse(head2);

    head1 = merge_list(head1, head2);
    printf("Merged Linklist is ::: ");
    traverse(head1);
}