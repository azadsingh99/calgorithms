#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int size;
    int top;
    char *st;
};

int isempty(struct node *stack)
{
    if(strlen(stack->st) == 0)
    {
        return 1;
    }

    return 0;
}

int precedence(char ch)
{
    if(ch == '+' || ch == '-')
    {
        return 1;
    }

    else if(ch == '*' || ch == '/')
    {
        return 2;
    }

    return 0;
}
char * push(struct node *stack, char ch)
{
     
    int i = stack->top, preced, value;
    char val;
    static char *temp = NULL;
    static int j=0;
    temp = (char *)malloc(sizeof(char *));
    preced = precedence(ch);

    if(isempty(stack))
    {
        stack->top++;
        stack->st[stack->top] = ch;
        return "";
    }

    else
    {   
        while(i >= 0)
        {
            val = stack->st[stack->top];
            value = precedence(val);
            if(preced > value)
            {
               stack->top++;
               stack->st[stack->top] = ch; 
               temp[j] = ch;
               j++;
               return "";
            }

            else
            {
                temp[j] = stack->st[stack->top];
                j++;
                stack->top--;
            }

            printf("Temp is :::: %s\n", temp);
            i--;
        }
    }
    return temp;
}

void postfix(struct node *stack, char *str)
{
    char *postfix, *temp;
    postfix = (char *)malloc(stack->size * sizeof(char *));
    temp = (char *)malloc(sizeof(char *));
    int j = 0, k = 0;
    for(int i=0; i<strlen(str); i++)
    {
        k = 0;
        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            temp  = push(stack, str[i]);   
            while(k < strlen(temp))
            {
                postfix[j] = temp[k];
                j++,k++;
            }
        }

        else
        {
            postfix[j] = str[i];
            j++;
        }
    }

    while(stack->top >= 0)
    {
        postfix[j] = stack->st[stack->top];
        stack->top--;
        j++;
    }
    printf("String is :::: %s\n", postfix);
}
int main()
{
    struct node *stack;
    char *str = (char *)malloc(sizeof(char *));

    stack = (struct node *)malloc(sizeof(struct node *));

    printf("Enter the expression:\n");
    scanf("%s", str);

    stack->size = strlen(str);
    stack->top = -1;
    stack->st = (char *)malloc(stack->size * sizeof(char *));
   //printf("%s", str);
    postfix(stack, str);
}