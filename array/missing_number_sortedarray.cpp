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
    int sum = 0, s;

    for(int i=0; i<n; i++)
    {
        sum = arr[i] + sum;
    }

    n = arr[n-1];

    s = n * (n + 1)/2;
    return (s-sum);

}
int main()
{
    int *arr, n;

    cout << "Enter the size of the array" << endl;
    cin >> n;

    arr = new int[n];

    insert(arr, n);
    cout << "The missing number is : " << missing_element(arr, n) << endl;
}