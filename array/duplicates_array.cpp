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

void check_for_duplicates(int *arr, int n)
{
    int last_duplicate = 0, count;

    for(int i=0; i<n; i++)
    {
        count = 0;
        for(int j=i; j<n; j++)
        {
            if(arr[i] == arr[j+1])
            {
                count++;
            }
        }

        if(count > 1)
        {
            cout << "Duplicate Element is : " << arr[i] << endl;
        }
        last_duplicate = arr[i];
    }
}
int main()
{
    int *arr, n;

    cout << "Enter the size of the array : ";
    cin >> n;

    arr = new int[n];

    insert(arr, n);
    check_for_duplicates(arr, n);
}