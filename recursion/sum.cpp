#include<iostream>
using namespace std;

int summ(int sum)
{
    static int add = 0;

    if(sum > 0)
    {

        sum = summ(sum-1) + sum;
    }

    return sum;
}

int main()
{
    int sum;

    cout << "Enter the value to sumup" << endl;
    cin >> sum;

    cout << summ(sum) << endl;

}