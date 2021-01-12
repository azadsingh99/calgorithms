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

void print(int *arr, int n)
{
    cout << "Displaying the elements of the array" << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void sorting(int *arr, int n)
{
    int i, j, temp;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

bool search(int *arr, int n, int element)
{
    int i=0,j=n-1;
    while(i <= j)
    {
        int mid = (i + j)/2;

        if(element > arr[mid])
        {
            i = mid+1;
        }

        else if(element == arr[mid])
        {
            return true;
        }

        else 
        {
            j = mid-1;
        }   
    }

    return false;
}
int main()
{
    int *arr, n;

    cout << "Enter the size of the array" << endl;
    cin >> n;

    arr = new int[n];

    insert(arr, n);
    print(arr, n);

    sorting(arr, n);
    print(arr, n);
    int element;

    cout << "Enter the element to be searched into the array" << endl;
    cin >> element;

    if(search(arr, n, element))
    {
        cout << "Element is Present" << endl;
    }

    else
    {
        cout << "Element is Not Present" << endl;
    }
    
}