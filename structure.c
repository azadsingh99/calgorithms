#include<stdio.h>
#include<stdlib.h>
struct dimension 
{
        int length;
        int breadth;
};

int main()
{   
    struct dimension *rectangle = malloc(sizeof(struct dimension *));
    int area;

    printf("Enter the value of length\n");
    scanf("%d", &rectangle->length); 

    printf("Enter the value of Breadth\n");
    scanf("%d", &rectangle->breadth);

    area = (rectangle->length * rectangle->breadth);
    
    printf("%d\n", area);
}