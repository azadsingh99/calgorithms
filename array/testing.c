#include<stdio.h>
int main()
{
    int arr[10], n, num;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n; i++)
    {
        num = arr[i];
        while(num%5)
        {
            printf("I am here\n");
            num++;
        }

        printf("Num is ::::: %d\n", num);
        
        if((num -arr[i]) < 3)
        {
            arr[i] = num;
        }
        num = 0;
    }
    
    for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
}