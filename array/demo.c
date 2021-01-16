#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int super_digit(int sum)
{
    int i = sum, j, k, summ = 0;
    
    while(i > 10)
    {
        summ = 0;
        j = i;
        while(j > 0)
        {
            k = j%10;
            summ = summ + k;;
            j = j / 10;
        }
        
        i = summ;
        printf("\n%d", summ);
    }
    
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

    int sum = atoi(str1);

    printf("%d", sum);
    super_digit(sum);

}
