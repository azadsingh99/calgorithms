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
void duplicates(int *arr, int n)
{
    int min, max, *temp, num;

    min = minimum(arr, n);
    max = maximum(arr, n);

    temp = new int[max];

    for(int i=0; i<n; i++)
    {
         temp[arr[i]]++;
    }

    for(int i=min; i<=max; i++)
    {
        if(temp[i] > 1)
        {
            cout << "Duplcate Element is : " << i << " for " << temp[i] << " times" << endl;
        }
    }

    
}
int main()
{
    int *arr, n;

    cout << "Enter the value of n" << endl;
    cin >> n;

    arr = new int[n];
    insert(arr, n);
    duplicates(arr, n);

}