#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int a;
        int b;

        int sum()
        {
            return a + b;
        }

        int sub()
        {
            return abs(a - b);
        }

        int multiply()
        {
            return a * b;
        }

        int division()
        {
            return a/b;
        }
};

int main()
{
    Arithematic a1, a2;

    cout << "Enter the number 1 : ";
    cin >> a1.a;

    cout << "Enter the number 2 : ";
    cin >> a1.b;

    cout << a1.sum() << endl;
    cout << a1.sub() << endl;
    cout << a1.multiply() << endl;
    cout << a1.division() << endl;
}