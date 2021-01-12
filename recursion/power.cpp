#include<iostream>
using namespace std;

int power(int base, int pow)
{
     if(pow == 0)
     {
         return 1;
     }
     
     return (base * power(base, pow-1));

}
int main()
{
    int pow, base;

    cout << "Enter the value of base " << endl;
    cin >> base;

    cout << "Enter the value of power" << endl;
    cin >> pow;

    cout << "Power of the Number is : " << power(base, pow) << endl;
}