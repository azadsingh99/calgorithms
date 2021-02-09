#include<iostream>
using namespace std;
class Your;
class Test
{
    private:
        int a;
    public:
        int b;
    protected:
        int c;
    friend Your;
    
};

class Your
{
    private:
        Test t;
    public:
        void fun()
        {
            t.a = 1;
            t.b = 2;
            t.c = 3;
            cout << t.a << " " << t.b << " " << t.c << endl;
        }
};

int main()
{
    Your y;

    y.fun();
    return 0;
}