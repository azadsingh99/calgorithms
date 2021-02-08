#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle()  //non parameterised constructor
        {
            length = 2;
            breadth = 2;
        }

        Rectangle(int l=0, int b=0) // parameterised constructor
        {
            setLength(l);
            setBreadth(b);
        }

        Rectangle(Rectangle &rect)    //copy constructor
        {
            length = rect.length;
            breadth = rect.breadth;
        }
        void setLength(int l)
        {
            if(l > 0)
                length = l;
            else
                length = 0;
        }

        void setBreadth(int b)
        {
            if(b > 0)
                breadth = b;
            else
                breadth = 0;
        }
    
        int area()
        {
            return length * breadth;
        }

        int perimeter()
        {
            return 2 * (length + breadth);
        }

        void getBreadth()
        {
            cout << "Breadth is ::: " << breadth << endl;
        }

        void getLength()
        {
            cout << "Length is ::: " << length << endl;
        }
};

int main()
{
    Rectangle r1(2);

    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    r1.getLength();
    r1.getBreadth();

    Rectangle r2(r1);

    r2.getBreadth();
    r2.getLength();
    cout << r2.area() << endl;
    return 0;
}