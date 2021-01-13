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
int main()
{
    int *arr, n;

    cout << "Enter the size of the array" << endl;
    cin >> n;

    arr = new int[n];
    insert(arr, n);
}