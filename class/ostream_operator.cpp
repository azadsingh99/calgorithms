#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imaginary;
    
    public:
        Complex(int r=0, int i=0)
        {
            real = r;
            imaginary = i;
        }

        friend ostream & operator<<(ostream &o, Complex &c);
};

ostream & operator<<(ostream &out, Complex &c)
{
    out << c.real << "+i" << c.imaginary;
    return out;
}

int main()
{
    Complex c(4,5);

    cout << c;
}