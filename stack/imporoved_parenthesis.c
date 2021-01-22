#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int top;
    char *str;
};

int isempty(struct node *st)
{
    int len = strlen(st->str);
    if(len == 0)
    {
        return 1;
    }

    return 0;
}
void push(struct node *st, char ch)
{
    st->top++;
    st->str[st->top] = ch;
}

void pop(struct node *st)
{
    st->str[st->top] = '\0';
    st->top--;
}
int isbalance(char *exp)
{
    struct node *st;
    st->top = -1;

    int len = strlen(exp);
    st->str = (char *)malloc(len * sizeof(char *));

    for(int i=0; i<len; i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(st, exp[i]);
        }

        else
        {
            if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
            {
                if(isempty(st))
                {
                    return 0;
                }

                pop(st);
            }
        }
    }

    if(isempty(st))
    {
        return 1;
    }

    return 0;
}
int main()
{
    char *exp;
    int result;

    exp = (char *)malloc(sizeof(char *));

    printf("Enter the expression:\n");
    scanf("%s", exp);
    
    result = isbalance(exp);

    if(result == 1)
    {
        printf("Balanced Expression\n");
    }

    else
    {
        printf("Not Balanced Expression\n");
    }

    free(exp);
    
}