#include<stdio.h>
#include<stdlib.h>
int main()
{
    float area_of_triangle;
    long int no_of_squares;

    long int ending_number;

    printf("Enter the ending point: ");
    scanf("%ld", &ending_number);

    for(long int base=1; base<=ending_number; base++)
    {
       
        if(base%2 == 0)
        {
            area_of_triangle = 0.5 * base* base;       
            no_of_squares = (area_of_triangle - base)/4;
        }

        else
        {
            int j = base-1;
            area_of_triangle = 0.5 * j* j;
            no_of_squares = (area_of_triangle - j)/4;
        } 

        printf("%ld\n", no_of_squares);
    }

}