#include<iostream>
using namespace std;

int e(int x, int n)
{
    static int p=1, f=1;
    int r;

    if(n == 0)
    {
        return 1;
    }

    else
    {
        r = e(x, n-1);
        p = p * x;
        f = f * n;
        return (r + (p/f));
    }
    
}

int main()
{
    int x, n;

    cout << "Enter the value of x and n";
    cin >> x >> n;

    cout << "Result of the taylor Series is : " << e(x,n) << endl;
}