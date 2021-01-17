#include<stdio.h>
#include<stdlib.h>
void insert(int *arr, int n)
{
    
    printf("Enter the values into the array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

}

int minimum(int *arr, int n)
{
    int min = arr[0];

    for(int i=0; i<n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    return min;

}

int maximum(int *arr, int n)
{
    int max = arr[0];

    for(int i=0; i<n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

int hashing_table(int *arr, int n)
{
    int min, max, *arr2;

    min = minimum(arr, n);
    max = maximum(arr, n);

    printf("Minimum : %d\n", min);
    printf("Maximum : %d\n", max);

    arr2 = malloc(max * sizeof(int *));

    for(int i=1; i<=max; i++)
    {
        arr2[arr[i]]++;
    }

    for(int i=min; i<=max; i++)
    {

    }
}

int main()
{
        int *arr, n;

        printf("Enter the size of the array\n");
        scanf("%d", &n);

        arr = malloc(n * sizeof(int *));
        insert(arr, n);
        hashing_table(arr, n);
}