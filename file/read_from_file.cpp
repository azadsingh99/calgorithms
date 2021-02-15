#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream ifs("My.Txt");

    if(!ifs.is_open())
        cout << "File is not open" << endl;
    int roll;
    string name;
    string branch;

    ifs >> name >> roll >> branch;
    ifs.close();

    cout << "Name : " << name << endl;
    cout << "Roll : " << roll << endl;
    cout << "Branch : " << branch << endl;

}