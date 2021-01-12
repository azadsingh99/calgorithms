#include<iostream>
using namespace std;

bool searching(int *arr, int n, int search)
{
    for(int i=0; i<n; i++)
    {
        if(search == arr[i])
        {
            return true;
        }
    }

    return false;
}
int main()
{
    int *arr,n, search;

    cout << "Enter the value of n" << endl;
    cin >> n;

    arr = new int[n];

    cout << "Enter the value into the array" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to be searched into the array" << endl;
    cin >> search;

    if(searching(arr, n, search))
    {
        cout << "Number is Present" << endl;
    }

    else
    {
        cout << "Number is not Present" << endl;
    }
    
    
    cout << "Values into the array are :" << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}