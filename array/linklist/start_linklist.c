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
            return head;
        }

        else
        {
            if(head == NULL)
            {
                head = (struct node *)malloc(sizeof(struct node *));
                head->data = val;
                head->next = NULL;
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
}

struct node * add_at_begin(struct node *head)
{
    struct node *temp = NULL;

    temp = (struct node *)malloc(sizeof(struct node *));
    printf("Enter the node to be inserted at the beginning\n");
    scanf("%d", &temp->data);

    temp->next = head;
    head = temp;
    return head;
}

void add_at_last(struct node *head)
{
    struct node *temp, *p;
    int val;

    p = (struct node *)malloc(sizeof(struct node *));
    printf("Enter the node to be inserted at Last\n");
    scanf("%d", &val);
    p->next = NULL;
 
    temp = p = head;
    while(temp) {
        p = temp;
        temp = temp->next;
    }

    temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;
    p->next = temp;
    p = temp;

}

void print_list(struct node *temp)
{

    printf("Final Linklist is :::: ");
    while(temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void add_at_middle(struct node *head)
{
    struct node *temp, *p, *temp2;
    int val, position, count=0;

    temp = head;
    while(temp){
        temp= temp->next;
        count++;
    }

    printf("Enter the position where you wanna enter the node\n");
    scanf("%d", &position);

    if(position > count)
    {
        printf("Invalid Postion\n");
        return;
    }

    temp = (struct node *)malloc(sizeof(struct node *));
    printf("Enter the node to be inserted in Linklist\n");
    scanf("%d", &temp->data);

    temp2 = p = head;
    int i=0;
    while(i < position-1)
    {
        p = temp2;
        temp2 = temp2->next;
        i++;
    }

    p->next = temp;
    temp->next = temp2;
}

struct node * delete_node(struct node *head)
{
    struct node *temp, *p;
    int val, count=0;

    printf("Enter the value of the node to be deleted\n");
    scanf("%d", &val);

    temp = p = head;

    while(temp) {

        if(val == temp->data)
        {
            if(count == 0)
            {
                p = head->next;
                free(head);
                head = p;
                return head;
            }

            else
            {
                temp = head;
                int i=0;
                while(i < count)
                {
                    p = temp;
                    temp = temp->next;
                    i++;
                }
  
                p->next = temp->next;
                free(temp);
                return head;
            }
        }
        temp = temp->next;
        count++;
    }

    printf("Node is not Present\n");
    return head;

}

struct node * sorting_list(struct node *head)
{
    struct node *temp, *p;

    temp = p = head;

    
}

struct node * reverse_linklist(struct node *head)
{
    struct node *temp, *p, *q;
    q =  NULL;

    printf("\nSorting Linklist::: \n");
    temp = p  = head;

    while(temp) 
    {
        temp = temp->next;
        p->next = q;
        q = p;
        p = temp;
    }

    head = q;
    return head;
}
int main()
{
    struct node *head = NULL;

    head = insert(head);
    print_list(head);
    printf("\n");

    head = add_at_begin(head);
    print_list(head);
    printf("\n");

    add_at_last(head);
    print_list(head);
    printf("\n");

    add_at_middle(head);
    print_list(head);
    printf("\n");

    head = delete_node(head);
    print_list(head);

    //head = sorting_list(head);
    //print_list(head);

    head = reverse_linklist(head);
    print_list(head);
}