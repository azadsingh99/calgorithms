#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    char data;
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
int push(struct node *head, int element)
{
    struct node *temp;

    if(head == NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node *));
        head->data = element;
    }

    else
    {
        temp = (struct node *)malloc(sizeof(struct node *));
        temp->data = element;
        temp->next = head;
        head = temp;
    }

}

int pop(struct node *head)
{
    struct node *temp;

    if(head == NULL)
    {
        return 0;
    }

    temp = head->next;
    free(head);
    head = temp;
}
int isbalance(char *exp)
{
    struct node *head = NULL;
    int len = strlen(exp);

    for(int i=0; i<len; i++)
    {
        if(exp[i] == '(')
        {
            head = push(head, exp[i]);
        }

        else if(exp[i] == ')')
        {
            if(isempty(head))
            {
                return 0;
            }

            head = pop(head);
        }
    }

    if(isempty(head))
    {
        return 1;
    }

}
int main()
{
    char *exp;
    int result;

    exp = (char *)malloc(sizeof(char *));

    printf("Enter the expression ::::\n");
    scanf("%s", exp);

    result = isbalance(exp);
}