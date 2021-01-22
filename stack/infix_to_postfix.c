#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack {
    int size;
    int top;
    char *str;
};

int isempty(struct stack *st)
{
    int len = strlen(st->str);
    
    if(len != 0)
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
char *push(struct stack *st, char ch, int preced, char *postfix)
{
    int len = strlen(postfix);
    int value;
    char val;

        while(1)
        {
            val = st->str[st->top];
            value = precedence(val);

            int i= st->top;

            if(isempty(st))
            {
                st->top++;
                st->str[st->top] = ch;
                break;
            }
            
            else if(preced > value)
            {
                st->top++;
                st->str[st->top] = ch;
                break;
            }

            else
            {
                len++;
                postfix[len] = ch;
            }
        }
    return postfix;
}
void postfix(struct stack *st, char *exp)
{
    char *postfix;
    postfix = (char *)malloc(st->size * sizeof(char *));
    int preced, j=0;
    
    for(int i=0; i<st->size; i++)
    {
        if(exp[i] == '-' || exp[i] == '+' || exp[i] == '*' || exp[i] == '/')
        {
            preced = precedence(exp[i]);
            postfix = push(st, exp[i], preced, postfix);
        }

        else
        {
             printf("I am here\n");
           int j = strlen(postfix);
           j++;
           postfix[j] = exp[i];
        }
    }  
}
int main()
{
    struct stack *st;

    char *exp;

    exp = (char *)malloc(sizeof(char *));
 
    printf("Enter the expression:\n");
    scanf("%s", exp);
    int len  = strlen(exp);

    printf("Size is ::::: %d\n",len); 
    st->size = len;
    
    //st->str = (char *)malloc(len * sizeof(char *));
    
    postfix(st, exp);
}