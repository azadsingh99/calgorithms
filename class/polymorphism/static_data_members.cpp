#include<iostream>
using namespace std;

class Test
{
    private:
        int a;
    public:
        static int count;
        Test()
        {
            a = 5;
            ++count;
        }

        static int getcount()
        {
            return count++;
        }
};

int Test ::count = 0;

int main()
{
    cout << Test::count << endl;
    Test t1, t2;

    cout << Test::getcount() << endl;
}