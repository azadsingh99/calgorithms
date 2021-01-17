#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *temp, *p;
    int val;

    while(1)
    {
        printf("Enter the node into the linklist\n");
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
                while(temp) {
                    temp = temp->next;
                }

                temp = (struct node *)malloc(sizeof(struct node *));
                temp->data = val;
                p->next = temp;
                p = temp;
            }
            
        }
    }

    temp = head;
    while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("Enter the node to be added at the last\n");
    scanf("%d", &val);

    temp = head;
    while(temp){
        temp = temp->next;
    }

    temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;
    p->next = temp;
    p = temp;

    printf("\n");

    temp = head;
    while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

}