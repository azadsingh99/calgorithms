#include<iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout << "Default of Base" << endl;
        }

        Base(int x)
        {
            cout << "Parametrised of Base" << x << endl;
        }
};

class Derived : public Base
{
    public:
        Derived() // 
        {
            cout << "Default of derived" << endl; 
        }

        Derived(int a)
        {
            cout << "One Parameterised of Derived" << " " << a;
        }
        Derived(int x, int a) : Base(x)  //calling parametrised constructor of base as well as derived class
        {
            cout << "Parameterised of Derived" << " " << a;
        }
};

int main()
{
    Derived d; // first it ll call default of base then default of derived class.
    Derived d1(10); // first default constructor of the base and then parameterised constructor of derived.
    Derived d2(10, 20); // method to call parameterised constructor of the base class.
    cout << endl;
    return 0;
}
