#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int a;
        int b;

        int sum()
        {
            return a+b;
        }

        int subtraction()
        {
            return a-b;
        }

        int multiply()
        {
            return a*b;
        }

        int division()
        {
            return a/b;
        }
};

int main()
{
    Arithematic *a1, *a2;

    a1 = new Arithematic();
    a2 = new Arithematic();

    cout << "Enter the a1 value : ";
    cin >> a1->a;

    cout << "Enter the a1 value : ";
    cin >> a1->b;

    cout << a1->sum() << endl;
    cout << a1->subtraction() << endl;
    cout << a1->multiply() << endl;
    cout << a1->division() << endl;

    cout << "Enter the a2 value : ";
    cin >> a2->a;

    cout << "Enter the a2 value : ";
    cin >> a2->b;

    cout << a2->sum() << endl;
    cout << a2->subtraction() << endl;
    cout << a2->multiply() << endl;
    cout << a2->division() << endl;

    return 0;
}