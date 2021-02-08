#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int leap_year(int year)
{
    if(year%4 == 0 && year%4==0 && year%100 != 0)
    {  
           return 1;
    } 
    
    else 
    {  
           return 0;
    }  
}

int main()
{
    int year;

    cin >> year;

    cout << leap_year(year) << endl;
}

/*
#include <iostream>
using namespace std;
int main() {
   int year = 1800;
      if (year % 4 == 0) {
         if (year % 100 == 0) {
            if (year % 400 == 0)
            cout << year << " is a leap year";
            else
            cout << year << " is not a leap year";
         } else
         cout << year << " is a leap year";
      } else
      cout << year << " is not a leap year";
      return 0;
}*/