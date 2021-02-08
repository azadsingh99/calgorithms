#include<iostream>
using namespace std;

int main()
{
    int n, *arr, sum=0;
    
    cin >> n;
    //int n1, n2, n3;
    //cin >>n1 >> n2 >> n3;
    
    arr = new int[n];
    for(int i=0; i<n; i++)
    {  
        cin >> arr[i];
        sum = sum + arr[i];
    }
    
    cout << sum << endl;
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            sum = sum + (arr[i] ^ arr[j]);
        }
    }
    
    cout << sum << endl;
    return 0;
}