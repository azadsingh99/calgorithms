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
    Rectangle r1;
    Rectangle *ptr;

    ptr = &r1;

    cout << "Enter the length : ";
    cin >> ptr->length;

    cout << "Enter the breadth : ";
    cin >> ptr->breadth;

    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;

    return 0;
}