#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack {
    int top;
    int size;
    char *str;
};

int isempty(struct stack *st)
{
    int len = strlen(st->str);
    if(len == 0)
    {
        return 1;
    }

    return 0;
}
void push(struct stack *st, char exp)
{
    st->top++;
    st->str[st->top] = exp;
}

void pop(struct stack *st)
{
    st->str[st->top] = '\0';
    st->top = st->top - 1;
}

void traverse(struct stack *st)
{
    for(int i=0; i<st->top; i++)
    {
        printf("%c", st->str[i]);
    }
}
int isBalance(char *exp)
{
    struct stack *st;
    st->top = -1;
    int len = 0;

    len = strlen(exp);

    st->size = len;
    st->str = (char *)malloc(len * sizeof(char *));

    for(int i=0; i<len; i++) 
    {
         
        if(exp[i] == '(')
        {   
            push(st, exp[i]);
        }

        else if(exp[i] == ')')
        {
            if(isempty(st))
            {
                return 0;
            }
            pop(st);
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

    printf("Enter the expression::\n");
    scanf("%s", exp);

    result = isBalance(exp);
    if(result == 1)
    {
        printf("Expression is Balanced\n");
    }

    else
    {
        printf("Equation is Not Balanced\n");
    }

    return 0;
}