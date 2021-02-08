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
        friend Complex operator+(Complex c1, Complex c2);

        void display()
        {
            cout << "Complex Number is :: " << real << "+" << imaginary << "i" << endl;
        }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;

    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;

    return temp;
}

int main()
{
    Complex c1(4,5);
    Complex c2(8,9);
    Complex c3;

    c3 = c1 + c2;
    c3.display();

    return 0;

}