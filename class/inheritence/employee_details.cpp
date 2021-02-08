#include<iostream>
using namespace std;

class Employee
{
    private:
        int e_id;
        string name;
    
    public:

        Employee(int e, string n)
        {
            e_id = e;
            name = n;
        }

        string getName()
        {
            return name;
        }

        int employee_id()
        {
            return e_id;
        }
};

class FullTimeEmp : public Employee
{
    private:
        int salary;
    
    public:
        FullTimeEmp(int e, string n, int s): Employee(e, n)
        {
            salary = s;
        }

        int getFulltimeSalary()
        {
            return salary;
        }
};

class PartTimeEmployee : public Employee
{
    private:
        int salary;
    
    public:
        PartTimeEmployee(int e, string n, int s): Employee(e,n)
        {
            salary = s;
        }

        int getParttimeSalary()
        {
            return salary;
        }
};

int main()
{
    FullTimeEmp f(1, "Azad", 5000);
    PartTimeEmployee p(2, "Anand", 2500);

    cout << "Name : " << f.getName() << endl;
    cout << "Salary :" << f.getFulltimeSalary() << endl;
    cout << "Status : FullTime" << endl;
    cout << endl;

    cout << "Name : " << p.getName() << endl;
    cout << "Salary : " << p.getParttimeSalary() << endl;
    cout << "Status : Parttime" << endl;


}