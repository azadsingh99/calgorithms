#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int n, value;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> value;
        v.push_back(value);
    }

    cout << "Array Values are :: \n";
    for(int x:v)
        cout<<x<<endl;
    
    cout << "Using Iterator\n";
    vector<int> :: iterator itr;

    for(itr=v.begin(); itr != v.end(); itr++)
        cout << *itr << endl;
    
     
}