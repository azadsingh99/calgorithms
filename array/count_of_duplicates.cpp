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

void count_duplicates(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            int j = i+1;
            while(arr[i] == arr[j])
            {
                j++;
            }
            cout << "The Number : " << arr[i] << " is appearing for : " << j-i << " times" << endl;
            i = j-1;
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
    count_duplicates(arr, n);
}