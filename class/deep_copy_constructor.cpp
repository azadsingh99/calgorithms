#include<iostream>
using namespace std;

class Test
{
    private:
        int a;
        int *p;
    
    public:
        Test(int x)
        {
            a = x;
            p = new int[a];
            for(int i=1; i<a; i++)
            {
                p[i] = i;
            }
        }

        Test(Test &t)
        {
            a = t.a;
            p = new int[a];
            for(int i=1; i<a; i++)
            {
                p[i] = i;
            }
        }

        void array()
        {
            for(int i=1; i<a; i++)
            {
                cout << p[i] << endl;
            }
        }
};

int main()
{
    Test t1(5);
    Test t2(t1);

    t1.array();
    t2.array();
}