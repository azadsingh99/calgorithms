#include<iostream>
using namespace std;

class Rectangle
{
    public:
        int length;
        int breadth;

        int area()
        {
            return length * breadth;
        }

        int perimeter()
        {
            return 2 * (length + breadth);
        }
};

int main()
{
    Rectangle *r1 = new Rectangle();

    cout << "Enter the r1 length : ";
    cin >> r1->length;

    cout << "Enter the r2 breadth : ";
    cin >> r1->breadth;

    cout << r1->area() << endl;
    cout << r1->perimeter() << endl;

    return 0;
}