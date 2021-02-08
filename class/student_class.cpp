#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        int roll_no;
        string name;
        int math_mar;
        int phy_mar;
        int eng_mar;
    
    public:
        Student(int r, string n, int math_marks, int physics_marks, int english_marks);
        void SetRollno(int r);
        void setName(string n);
        void setmarks(int math_marks, int physics_marks, int english_marks);
        string getName();
        int getRollno();
        void getmarks();
        int total_marks();
        string grade();
};

Student :: Student(int r, string n, int math_marks, int physics_marks, int english_marks)
{
    SetRollno(r);
    setName(n);
    setmarks(math_marks, physics_marks, english_marks);
}

void Student :: SetRollno(int r)
{
    if(r > 0)
        roll_no = r;
    else
        cout << "Invalid Roll No." << endl;
}

void Student :: setName(string n)
{
    if(n == " ")
        cout << "Name cannot be empty" << endl;
    else
        name = n;
}

void Student :: setmarks(int math_marks, int physics_marks, int english_marks)
{
    math_mar = math_marks;
    phy_mar = physics_marks;
    eng_mar = english_marks;
}

int Student :: getRollno()
{
    return roll_no;
}

string Student :: getName()
{
    return name;
}

void Student ::  getmarks()
{
    cout << "Maths Marks : " << math_mar << endl;
    cout << "Physics Marks : " << phy_mar << endl;
    cout << "English Marks : "  << eng_mar << endl;
}
int Student :: total_marks()
{
    return (math_mar + phy_mar + eng_mar);
}

string Student :: grade()
{
    int sum = (math_mar + phy_mar + eng_mar) / 3;

    if(sum >= 75)
        return "A+";
    else if(sum >= 65 && sum < 75)
        return "A";
    else if(sum >=55 && sum < 65)
        return "B+";
    else if(sum >=45 && sum < 55)
        return "B";
    else if(sum >= 35 && sum < 45)
        return "C";
    else
        return "Fail";
}

int main()
{
    int roll_no, maths_marks, physics_marks, english_marks;
    string name;

    cout << "Enter the Roll No of the Student : ";
    cin >> roll_no;

    cout << "Enter the name of the Student : ";
    cin >> name;

    cout << "Enter the Math Marks : ";
    cin >> maths_marks;

    cout << "Enter the Physics Marks : ";
    cin >> physics_marks;

    cout << "Enter the English Marks : ";
    cin >> english_marks;
    Student s1(roll_no, name , maths_marks, physics_marks, english_marks);
    
    cout << endl;
    //cout << s1.getName() << endl;
    //cout << s1.getRollno() << endl;
    //s1.getmarks();
    cout << "Total Marks : " << s1.total_marks() << endl;
    cout << "Grade : " << s1.grade() << endl;
    
    
    return 0;
}


