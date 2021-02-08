#include<iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int i, j, n, sum_dig1=0, sum_dig2 = 0;
    
    cin >> n;
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        { 
            if(i == j)
                sum_dig1 = sum_dig1 + arr[i][j];
        }
    }
        
    for(int i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i == 0 && j == 2)
            {
                sum_dig2 = sum_dig2 + arr[i][j];
                cout << "Sum is ::::: " << sum_dig2 << "\n";
            }
            
            else if(i == 1 && j == 1)
            {
                sum_dig2 = sum_dig2 + arr[i][j];
                cout << "Sum is ::::: " << sum_dig2 << "\n";
            }
            
            else if(i==2 && j == 0)
            {
                sum_dig2 = sum_dig2 + arr[i][j];
                cout << "Sum is ::::: " << sum_dig2 << "\n";
            }
        }
    }
    
    
    int result = sum_dig2 - sum_dig1;
    cout << result;
    
}
                
