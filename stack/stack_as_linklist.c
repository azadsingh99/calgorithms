#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

int isempty(struct node *head)
{
    if(head == NULL)
    {
        return 1;
    }

    return 0;
}
struct node *push(struct node *head)
{
    struct node *temp;

    if(temp == NULL)
    {
        printf("Stack Overflow\n");
        return head;
    }
    temp = (struct node *)malloc(sizeof(struct node *));
    printf("Push the Value into the Stack:\n");
    scanf("%d", &temp->data);

    temp->next = head;
    head = temp;
    return head;
}

struct node *pop(struct node *head)
{
    if(isempty(head))
    {
        printf("Stack Underflow\n");
        return head;
    }
    
    struct node *temp;
    
    temp = (struct node *)malloc(sizeof(struct node *));
    temp = head->next;
    int x = head->data;
    free(head);
    printf("Poped Element is :::: %d\n", x);
    head = temp;
    return head;
}

void traverse(struct node *head)
{
    if(isempty(head))
    {
        printf("Stack Underflow\n");
        return;
    } 

    struct node *temp;
    temp = head;
    while(temp){
        printf("%d ", temp->data);
        temp = temp->next;
    }

}

void peak(struct node *head)
{
    if(isempty(head))
    {
        printf("Stack Underflow\n");
        return;
    } 

    int count = 0, index;
    struct node *temp;
    temp = head;

    while(temp) {
        temp = temp->next;
        count++;
    }

    printf("Enter the index postion to see the node:\n");
    scanf("%d", &index);

    if(index > (count-1))
    {
        printf("Invalid Postion\n");
        return;
    }

    count = 0;
    temp = head;
    while(count < index) {
        temp = temp->next;
        count++;
    }

    printf("I am at Last\n");
    printf("Node at Index %d is %d\n", index, temp->data);
}
int main()
{
    struct node *head = NULL;
    int option, val;

        while(1)
    {
        printf("\n");
        printf("Operations to perform :\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peak\n");
        printf("4. Traverse\n");
        printf("5. IsEmpty\n");
        printf("6. Exit\n");
        printf("\n");

        scanf("%d", &option);

        switch(option)
        {
            case 1:
                    head = push(head);
                    break;
            
            case 2:
                    head = pop(head);
                    break;
            
            case 3:
                    peak(head);
                    break;

            case 4:
                    traverse(head);
                    break;
            
            case 5:
                    val = isempty(head);
                    if(val)
                    {
                        printf("List is Empty\n");
                    }

                    else
                    {
                        printf("List is not Empty\n");
                    }
                    break;
            
            case 6:
                    exit(0);
            
            default:
                    printf("Invalid Choice!!!!\n");

        }

    }
}