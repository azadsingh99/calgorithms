#include<iostream>
using namespace std;
void insert(int *arr, int n)
{
    cout << "Enter the values into the array" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

int minimum(int *arr, int n)
{
    int min = 0;
    min = arr[0];
    for(int i=0; i < n; i++)
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
    int max = 0;
    max = arr[0];
    for(int i=0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

void missing_element(int *arr, int n)
{
    int min, max, num;
    int *element = NULL;

    min = minimum(arr, n);
    max = maximum(arr, n);

    element = new int[max];

    for(int i=0; i<n; i++)
    {
        num = arr[i];
        element[num] = 1;
    }

    cout << "Missing Elements are : ";
    for(int i=min; i<=max; i++)
    {
        if(element[i] != 1)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int *arr, n;

    cout << "Enter the size of the array" << endl;
    cin >> n;

    arr = new int[n];
    insert(arr, n);
    missing_element(arr, n);
    return 0;
}