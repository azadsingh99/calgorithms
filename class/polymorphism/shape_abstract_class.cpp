#include<iostream>
using namespace std;

class Shape
{
    public:
        virtual float area() = 0;
        virtual float perimeter() = 0;
};

class Rectangle : public Shape
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l=0, int b=0)
        {
            length = l;
            breadth = b;
        }

        float area()
        {
            return (length * breadth);
        }

        float perimeter()
        {
            return (2 * (length + breadth));
        }
};

class Circle : public Shape
{
    private:
        int radius;
    
    public:
        Circle(int r=0)
        {
            radius = r;
        }

        float area()
        {
            return (3.14 * radius * radius);
        }

        float perimeter()
        {
            return (2 * 3.142 * radius);
        }
};

int main()
{
    Shape *s = new Rectangle(10,5);

    cout << "Area of Rectangle : " << s->area() << endl;
    cout << "Perimeter of Rectangle : " << s->perimeter() << endl;

    s = new Circle(10);
    cout << "Area of Cirlce : " << s->area() << endl;
    cout << "Perimeter of Cirlce : " << s->perimeter() << endl;

}