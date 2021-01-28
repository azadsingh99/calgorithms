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
        printf("Enter the node into the linked list\n");
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

    p->next = head->next;
    return head;
}

void traverse(struct node *head)
{
    struct node *temp = head;

    int i=0;
    while(i < 10)
    {   
        printf("%d ", temp->data);
        temp = temp->next;
        i++;
    }

}
int detect_cycle(struct node *head)
{
    struct node *temp, *p;

    temp = p = head;

    do{
        p = p->next;
        temp = temp->next;
        if(temp == NULL)
        {
            return 0;
        }

        temp = temp->next;
    }while(p && temp && p!=temp);

    if(temp == p)
    {
        return 1;
    }
    
    return 0;
}
int main()
{
    struct node *head = NULL;
    int val;
    head = insert(head);
   // traverse(head);
    val = detect_cycle(head);

    if(val)
    {
        printf("Cycle is Present:\n");
    }

    else
    {
        printf("Cycle is Not Present\n");
    }
}