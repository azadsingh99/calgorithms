#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *insert(struct node *head)
{
    struct node *temp , *p;
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
                    temp = temp->next;
                }

                temp = (struct node *)malloc(sizeof(struct node *));
                temp->data = val;
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

int middle_element(struct node *head)
{
    struct node *temp = head;
    int count=0;

    while(temp){
        count++;
        temp = temp->next;
    }
    count = count/2;

    int i=0;
    temp = head;
    while(i < count) {
        temp = temp->next;
        i++;
    }

    return (temp->data);
}
int main()
{
    struct node *head = NULL;
    int middle;

    head = insert(head);
    printf("Elements of the Linked List are :: ");
    traverse(head);

    middle = middle_element(head);
    printf("Middle most Element is :::: %d\n", middle);
    return 0;
}