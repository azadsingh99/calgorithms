#include<iostream>
using namespace std;

template <class T>
class Rectangle
{
    private:
        T length;
        T breadth;
    
    public:
        Rectangle(T l, T b);
        T area();
        T perimeter();
        T getlength() { return length; };
        void setlength(T l){ length = l;};
};

template <class T>
Rectangle <T> :: Rectangle(T l, T b)
{
    length = l;
    breadth = b;
}

template <class T>
T Rectangle <T> :: area()
{
    return length*breadth;
}

template <class T>
T Rectangle <T> :: perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    Rectangle <float> r(10.0, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    r.setlength(10);
    cout << r.getlength() << endl;
}
