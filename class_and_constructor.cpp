#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle(int x, int y);
        int area();
        int perimeter();
        int getlength(){ return length;}
        void setLength(int l){ length = l;};
        ~Rectangle();
};

Rectangle::Rectangle(int x, int y)
{
    length = x;
    breadth = y;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return (2 * (length + breadth));
}

Rectangle::~Rectangle()
{

}

int main()
{
    int len, breadth;

    cin >> len;
    cin >> breadth;

    Rectangle r(len,breadth);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    r.setLength(20);
    cout << r.getlength() << endl;

}