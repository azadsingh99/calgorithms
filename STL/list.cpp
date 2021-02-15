#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l;
    int value;

    while(1)
    {
        cin >> value;

        if(value == 0)
            break;
        
        l.push_back(value);
    }

    l.push_front(1);

    cout << "using iterator" << endl;
    list <int> :: iterator itr;

    for(itr=l.begin(); itr!=l.end(); itr++)
        cout << *itr << endl;
    
    l.pop_back();
    l.pop_front();

    cout << endl;
    for(itr=l.begin(); itr!=l.end(); itr++)
        cout << *itr << endl;
}