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

        Complex operator+(Complex x)
        {
            Complex temp;

            temp.real = real + x.real;
            temp.imaginary = imaginary + x.imaginary;

            return temp; 
        }

        Complex operator-(Complex x)
        {
            Complex temp;

            temp.real = real - x.real;
            temp.imaginary = imaginary - x.imaginary;

            return temp;
        }

        void display()
        {
            cout << "C3 is : " << real << "+" << imaginary << "i" <<  endl;
        }
};

int main()
{
    int r, i;

    cout << "Enter the real Number for c1 : ";
    cin >> r;

    cout << "Enter the imaginary number for c1 : ";
    cin >> i;

    Complex c1(r, i);
    
    cout << "Enter the real Number for c2 : ";
    cin >> r;

    cout << "Enter the imaginary number for c2 : ";
    cin >> i;

    Complex c2(r, i);
    Complex c3;

    c3 = c1 + c2;
    c3.display();

    c3 = c1 - c2;
    c3.display();

    return 0;
}
