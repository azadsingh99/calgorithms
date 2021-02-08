#include<iostream>
using namespace std;

int main()
{
    string str;
    
    cin >> str;
    
    if(str[8] == 'A')
        str.erase(8,9);
    
    cout << str << endl;
    
}
    
 
