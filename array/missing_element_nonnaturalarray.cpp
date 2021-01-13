#include<iostream>
using namespace std;
void insert(int *arr, int n)
{
    cout << "Enter the elements into the array" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

int missing_element(int *arr, int n)
{
    int diff;

    diff = arr[0] - 0;

    for(int i=0; i<n; i++)
    {
        if(diff != (arr[i] - i))
        {
            return arr[i]-1;
        }
    }

    return 0;
}
int main()
{
    int *arr, n;

    cout << "Enter the size of the array" << endl;
    cin >> n;

    arr = new int[n];
    insert(arr, n);

    int element = missing_element(arr, n);

    if(element)
    {
        cout << "The Missing Element is : " << element << endl;
    }

    else
    {
        cout << "No Element are Missing" << endl;
    }
    
}