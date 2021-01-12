#include<iostream>
using namespace std;
int factorial(int fac)
{

    if(fac > 1)
    {
        fac = factorial(fac-1) * fac;
    }

    return fac;
}

int main()
{
    int fac;

    cout << "Enter the value of fac ";
    cin >> fac;

    cout << "Factorial of the Number is : " << factorial(fac) << endl;
}