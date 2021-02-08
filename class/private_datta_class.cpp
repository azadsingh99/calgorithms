#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    
    public:
        void setLength(int val)
        {
            if(val >= 0)
                length = val;
            else
                length = 0;
        }

        void setBreadth(int val)
        {
            if(val >= 0)
                breadth = val;
            else
                breadth = 0;
        }

        int getLength()
        {
            return length;
        }

        int getBreadth()
        {
            return breadth;
        }

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
    int val;

    cout << "Enter the value for the length of the r1 : ";
    cin >> val;
    r1->setLength(val);

    cout << "Enter the value for the breadth of the r1 : ";
    cin >> val;
    r1->setBreadth(val);

    cout << "Length is :: " << r1->getLength() << endl;
    cout << "Breadth is :: " << r1->getBreadth() << endl;
    cout << "Area is :: " << r1->area() << endl;
    cout << "Perimeter is :: " << r1->perimeter() << endl;

    return 0;
}