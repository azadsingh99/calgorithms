#include<iostream>
using namespace std;

int fibonacci(int num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }

    return fibonacci(num-1) + fibonacci(num-2);
}
int main()
{
    int num;

    cout << "Enter the value of num" << endl;
    cin >> num;

    for(int i=0; i<num; i++)
    {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
}