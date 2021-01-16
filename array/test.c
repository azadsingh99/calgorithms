#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int super_digit(long int sum)
{
    int i = sum, j, k;
    
    while(i >= 10)
    {
        sum= 0;
        j = i;
        while(j > 0)
        {
            k = j%10;
            sum = sum + k;
            j = j / 10;
        }
   
        i = sum;
    }
    
    return sum;
}
int main()
{
     char str[20], str1[20];
    int r;

    scanf("%s", str);
    scanf("%d", &r);
    
    strcpy(str1, str);

    int i=1;
    while(i <r )
    {
        strcat(str1, str);
        i++;
    }

    long int sum = atoi(str1);

    printf("%d", super_digit(sum));

}
