#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream ofs ("My.Txt", ios::app);
    ofs<<"John"<<endl;
    ofs<<"25"<<endl;
    ofs<<"cs"<<endl;

    ofs.close();
}