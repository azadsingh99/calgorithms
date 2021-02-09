#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void fun1()
        {
            cout << "Function of Base Class"<< endl;
        }
};

class Derived : public Base
{
    public:
        void fun1()
        {
            cout << "Function of Derived Class" << endl;
        }
};

int main()
{
    Derived d;
    Base *c = &d;

    c->fun1();
}