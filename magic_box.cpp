#include<iostream>
using namespace std;

int main()
{
    int arr[4][4], sum, i, j;
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    for(i=0; i<3; i++)
    {
        sum = 0;
        for(j=0; j<3; j++)
        {
            sum = sum + arr[i][j];
        }
        arr[i][j] = sum;
        sum = 0;
        for(j=0; j<3; j++)
        {
            sum = sum + arr[j][i];
        }
        arr[j][i] = sum;
    }
    
    /*for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            cout << " " << arr[i][j] << " ";
            arr[3][3] = 0;
        }
        cout << endl;
    }*/

    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            
        }
    }

    return 0;
}