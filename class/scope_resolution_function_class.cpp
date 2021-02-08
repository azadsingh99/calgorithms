#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle();
        Rectangle(int l, int b);
        Rectangle(Rectangle &rect);
        void SetLength(int l);
        void SetBreadth(int b);
        int getLength(){return length;}
        int getBreadth(){return breadth;}
        bool IsSquare();
        int area();
        int perimeter();
};

Rectangle :: Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle :: Rectangle(int l, int b)
{
   SetLength(l);
   SetBreadth(b);
}

Rectangle :: Rectangle(Rectangle &rect)
{
    length = rect.length;
    breadth = rect.breadth;
}

void Rectangle :: SetLength(int l)
{
    if(l > 0)
        length = l;
    else
        length = 0;
}

void Rectangle :: SetBreadth(int b)
{
    if(b > 0)
        breadth = b;
    else
        breadth = 0;
}

int Rectangle :: area()
{
    return length * breadth;
}

int Rectangle :: perimeter()
{
    return 2 * (length + breadth);
}

bool Rectangle :: IsSquare()
{
    if(length == breadth)
        return true;
    else
        return false;
}
int main()
{
    Rectangle *r1 = new Rectangle(2,2);

    cout << r1->area() << endl;
    cout << r1->perimeter() << endl;
    cout << r1->getLength() << endl;
    cout << r1->getBreadth() << endl;
    cout << r1->IsSquare() << endl;
    return 0;
}



