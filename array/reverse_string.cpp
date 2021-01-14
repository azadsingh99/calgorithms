#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
    char *arr;
    int temp, n;

    cout << "Enter the size of the string " << endl;
    cin >> n;

    arr = new char[n];

    cout << "Enter the string" << endl;
    cin >> arr;

    int length = strlen(arr);
    int j=length-1;

    for(int i=0; i<j; i++,j--)
    {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
    }

    cout << "Reversed String is : " << arr << endl;
}