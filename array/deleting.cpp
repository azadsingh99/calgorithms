#include<iostream>
using namespace std;

bool deletion(int *arr, int n, int number)
{
    for(int i=0; i<n; i++)
    {
        if(number == arr[i])
        {
           for(int j=i; j<n-1; j++)
           {
               arr[j] = arr[j+1];
           }
           n--;
           return true;
        }
    }

    return false;
}
int main()
{
    int *arr,n, number;

    cout << "Enter the size of the array" << endl;
    cin >> n;

    arr = new int[n];

    cout << "Enter the values into the array" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to be deleted from the array" << endl;
    cin >> number;

    if(deletion(arr, n, number))
    {
        cout << "Element is Deleted" << endl;
    }

    else
    {
        cout << "Element is not present" << endl;
    }

    cout << "Values into the array are :" << endl;
    for(int i=0; i<n-1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}