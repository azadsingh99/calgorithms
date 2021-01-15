#include<iostream>
using namespace std;
void duplicates(char *str, int n)
{
    int *temp = NULL;

    temp = new int[25];

    for(int i=0; i<n; i++)
    {
       int num = str[i];
       int num2 = num - 97;
       temp[num2]++;
    }

    for(int i=0; i<25; i++) 
    {
        if(temp[i] > 1)
        {
            char ch = i + 97;
            
            cout << "Character is > " << ch << " repeated for : " << temp[i] << " times" << endl;
        }
    }
}

int main()
{
    char *str;
    int n;

    cout << "Enter the size of the string : ";
    cin >> n;

    str = new char[n];

    cout << "Enter the string : ";
    cin >> str;

    duplicates(str, n);
}