#include<iostream>
using namespace std;

int e(int x, int n)
{
    static int result = 1;

    if(n == 0)
    {
        return result;
    }

    result = (1 + x/n) * result;
    return e(x, n-1);
}
int main()
{
    int x, n;

    cout << "Enter the value of x and n" << endl;
    cin >> x >> n;

    cout << "Value of the Taylor Series is : " << e(x,n);
}