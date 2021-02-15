#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    public:
        int roll_no;
        string name;
        string branch;

        Student(int r, string n, string b)
        {
            roll_no = r;
            name = n;
            branch = b;
        }
        friend ofstream & operator<<(ofstream &ofs, Student &s);
        friend ifstream & operator>>(ifstream &ifs, Student &s);

};

ofstream & operator<<(ofstream &ofs, Student &s)
{
    ofs << s.roll_no << endl;
    ofs << s.name << endl;
    ofs << s.branch << endl;

    return ofs;
} 

ifstream & operator>>(ifstream &ifs, Student &s)
{   
    ifs >> s.roll_no >> s.name >> s.branch;

    return ifs;
}


int main()
{
    Student s(1, "Azad", "CS");

    ofstream ofs("Student.txt", ios::trunc);
    ofs << s;

    ifstream ifs("Student.txt");
    ifs >> s;
    cout << "Name\t" << s.name << endl;
    cout << "Roll.No\t" << s.roll_no << endl;
    cout << "Branch\t" << s.branch << endl;

    ofs.close();
    ifs.close();

}