#include<iostream>
using namespace std;

int main()
{
    int n, *arr;
    
    cin >> n;
    
    arr = new int[n];
    
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    for(int i=0; i<n; i++)
    {
        int result = arr[i]%5;
        
        if(arr[i] < 38)
            continue;
        else if(result >= 3)
        {
            while(arr[i]%5==0)
                arr[i]++;
        }   
        else 
            continue;
    }
    
    for(int i=0; i<n; i++)
        cout << arr[i] << endl;
}