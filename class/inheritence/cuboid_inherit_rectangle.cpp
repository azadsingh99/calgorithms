#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l=0, int b=0);
        void setLength(int l);
        void setBreadth(int b);
        int getLength();
        int getBreadth();
        int area();
        int perimeter();
};

Rectangle :: Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
}

void Rectangle :: setLength(int l)
{
    if(l > 0)
        length = l;
    else
        length = 0;
}

void Rectangle :: setBreadth(int b)
{
    if(b > 0)
        breadth = b;
    else
        breadth = 0;
}

int Rectangle :: getLength()
{
    return length;
}

int Rectangle :: getBreadth()
{
    return breadth;
}

int Rectangle :: area()
{
    return length * breadth;
}

int Rectangle :: perimeter()
{
    return (2 * (length + breadth));
}

class Cuboid:public Rectangle
{
    private:
        int height;
    public:
        Cuboid(int l=0, int b=0, int h=0);
        void setHeight(int h);
        int getHeight();
        int volume();
        friend Cuboid operator+(Cuboid c1, Cuboid c2);
        friend Cuboid operator-(Cuboid c1, Cuboid c2);
        friend ostream & operator<<(ostream &out, Cuboid &c);
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
        height = 0;
}

int Cuboid :: getHeight()
{
    return height;
}

int Cuboid :: volume()
{
    return getLength() * getBreadth() * height;
}

ostream & operator<<(ostream &out, Cuboid &c)
{
    out << c.getLength() << " " << c.getBreadth() << " " << c.getHeight() << endl;

    return out;
} 

Cuboid operator+(Cuboid c, Cuboid c1)
{
    int l;
    Cuboid temp;

    l = c.getLength() + c1.getLength();
    temp.setLength(l);

    l = c.getBreadth() + c1.getBreadth();
    temp.setBreadth(l);

    temp.height = c.height + c1.height;

    return temp;
}

Cuboid operator-(Cuboid c1, Cuboid c2)
{
    int l;
    Cuboid temp;

    l = c2.getLength() - c1.getLength();
    temp.setLength(l);

    l = c2.getBreadth() - c1.getBreadth();
    temp.setBreadth(l);

    temp.height = c2.height - c1.height;

    return temp;
}
int main()
{
    int h, l, b;

    cout << "Enter the Length : ";
    cin >> l;
    cout << "Enter the Breadth : ";
    cin >> b;
    cout << "Enter the Height : ";
    cin >> h;

    Cuboid c(l,b,h);

    //cout << "Length : " << c.getLength() << endl;
    //cout << "Breadth : " << c.getBreadth() << endl;
    //cout << "Height : " << c.getHeight() << endl;
    cout << endl;
    cout << "Volume : " << c.volume() << endl;
    //cout << c << endl;

    cout << "Enter the Length : ";
    cin >> l;
    cout << "Enter the Breadth : ";
    cin >> b;
    cout << "Enter the Height : ";
    cin >> h;

    Cuboid c2(l,b,h);
    
    //cout << "Length : " << c2.getLength() << endl;
    //cout << "Breadth : " << c2.getBreadth() << endl;
    //cout << "Height : " << c2.getHeight() << endl;
     cout << endl;
    cout << "Volume : " << c2.volume() << endl;
    //cout << c2 << endl;

    Cuboid c3;

    c3 = c + c2;
    cout << "Addition : " << c3 << endl;

    c3 = c - c2;
    cout << "Subtraction : " << c3 << endl;

    return 0;    
}