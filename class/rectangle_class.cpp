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
        return 2 * (length * breadth);
    }
};

int main()
{
    Rectangle r1, r2;

    cout << "Enter the length of the r1 : ";
    cin >> r1.length;

    cout << "Enter the breadth of the r1 : ";
    cin >> r1.breadth;

    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;

    cout << "Enter the length of r2 : ";
    cin >> r2.length;

    cout << "Enter the breadth of r2 : ";
    cin >> r2.breadth;

    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;
}