#include<iostream>
using namespace std;

class Student
{
    public:
        int roll_no;
        string name;
        static int admno;
        Student(int r, string n)
        {
            roll_no = r;
            name = n;
            admno++;    
        }

        void display()
        {
            cout << "Name : " << name << endl << "Roll No : " << roll_no << endl;
        }
};

int Student :: admno = 0;

int main()
{
    Student s1(1, "Azad");
    Student s2(2, "Anand");
    Student s3(3, "Arti");

    s1.display();
    cout << endl;
    s2.display();
    cout << endl;
    s3.display();
    cout << endl;
    cout << "Total Students : " << Student::admno << endl;
}