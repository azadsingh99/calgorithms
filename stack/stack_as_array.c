#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};

int isfull(struct stack *st)
{
    if(st->top >= (st->size-1))
    {   
        return 1;
    }

    return 0;
}

int isempty(struct stack *st)
{
    
    if(st->top == -1)
    {
        return 1;
    }

    return 0;
}
void push(struct stack *st)
{
    int data;

    printf("Enter the data to be pushed into the stack\n");
    scanf("%d", &data);

    if(isfull(st))
    {
        printf("Stack Overflow\n");
        return;
    }
    st->top++;
    st->arr[st->top] = data;
}

void pop(struct stack *st)
{
    if(isempty(st))
    {
        printf("Stack Underflow\n");
        return;
    }
    
    int x = st->arr[st->top];
    st->top--;
    printf("Poped Element is :::: %d\n", x);
}
void traverse(struct stack *st)
{
    if(isempty(st))
    {
        printf("Stack Underflow\n");
        return;
    }
    for(int i=0; i<=st->top; i++)
    {
        printf("%d ", st->arr[i]);
    }

    printf("\n");
}

void peak(struct stack *st)
{
    if(isempty(st))
    {
        printf("Stack Underflow\n");
        return;
    }

    int index;
    printf("Enter the index which you wanna see\n");
    scanf("%d", &index);

    if(index > st->top)
    {
        printf("Index is Greater\n");
        return;
    }

    printf("Value at Index %d is %d\n", index, st->arr[index]);
}

int main()
{
    struct stack st;
    int option;

    printf("Enter the size of the stack\n");
    scanf("%d", &st.size);

    st.arr = malloc(st.size * sizeof(int));
    st.top = -1;

    while(1)
    {
        printf("\n");
        printf("Operations to perform :\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peak\n");
        printf("4. Traverse\n");
        printf("5. IsFull\n");
        printf("6. IsEmpty\n");
        printf("7. Exit\n");

        scanf("%d", &option);

        switch(option)
        {
            case 1:
                    push(&st);
                    break;
            
            case 2:
                    pop(&st);
                    break;
            
            case 3:
                    peak(&st);
                    break;

            case 4:
                    traverse(&st);
                    break;
            
            case 5:
                    isfull(&st);
                    break;
            
            case 6:
                    isempty(&st);
                    break;
            
            case 7:
                    exit(0);
            
            default:
                    printf("Invalid Choice!!!!\n");

        }

    }

}