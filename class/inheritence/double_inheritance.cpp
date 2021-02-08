#include<iostream>
using namespace std;

class Square
{
    private:
        int length;
    
    public:
        Square(int l=0);
        //Square(&s);
        void setLength(int l);
        int getLength();
        int area();
        int perimeter();
};

Square :: Square(int l)
{
    setLength(l);
}

//Square :: Square(Square &s)
//{
 //   s.setLength(length);
//} 

void Square :: setLength(int l)
{
    if(l > 0)
        length = l;
    else
        length = 1;
}

int Square ::perimeter()
{
    return (2 * length);
}

int Square :: area()
{
    return (length * length);
}

int Square :: getLength()
{
    return length;
}

class Rectangle : public Square
{
    private:
        int breadth;
    public:
        Rectangle(int l=0, int b=0);
        void setBreadth(int b);
        int getBreadth();
        int area();
        int perimeter();
    
};

Rectangle :: Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
}

void Rectangle :: setBreadth(int b)
{
    if (b > 0)
        breadth = b;
    else
        breadth = 1;
}

int Rectangle :: getBreadth()
{
    return breadth;
}

int Rectangle :: area()
{
    return (getLength() * breadth);
}

int Rectangle :: perimeter()
{
    return (2 * (getLength() + breadth));
}

class Cuboid : public Rectangle
{
    private:
        int height;
    public:
        Cuboid();
        Cuboid(int l=0, int b=0, int h=0);
        void setHeight(int h);
        int getHeight();
        int volume();
};

Cuboid :: Cuboid(int l, int b, int h)
{
    setLength(l);
    setBreadth(b);
    setHeight(h);
}

void Cuboid :: setHeight(int h)
{
    if(h > 0)
        height = h;
    else
        height = 1;
}

int Cuboid :: getHeight()
{
    return height;
}

int Cuboid :: volume()
{
    return getLength() * getBreadth() * height;
}

int main()
{
    Square s(2);
    Rectangle r(2,4);
    Cuboid c(2,3,4);

    cout << s.area() << endl;
    cout << r.getLength() << endl;
    cout << "Cuboid Length :" << c.getLength() << endl;

    return 0;
}






