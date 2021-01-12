#include<iostream>
using namespace std;

int main()
{
    int *arr;

    arr = new int[5];

    cout << "Enter the values into the array" << endl;
    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
    }

    cout << "Displaying the values of the array" << endl;
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << endl;
    }

    delete []arr;

}