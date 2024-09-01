/*
Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has the following members:
company_name
manager_salary
employee_salary
total_staff
total_annual_revenue
can_terminate
- use all attributes accessibility in the parent class and child class properly.
- override a method myAccess() in both child classes to display all parent class members' values accordingly.
*/

#include<iostream>
using namespace std;

class Employee{

    protected:
        string company_name = "LNT";

    public:
        void myAccess(){

            cout << endl << ">>  By Employee Access : " << endl;
            cout << "    Company Name : " << company_name << endl;

        }

};


class Manager : public Employee{

    protected:
        int employee_salary = 50000;
        int total_staff = 20;
        int total_annual_revenue = 1.57;
        bool can_terminate = true;

    public:
        void myAccess(){

            cout << endl << ">>  By Manager Access : " << endl;
            cout << "    Company Name : " << company_name << endl
                 << "    Employee Salary : " << employee_salary << endl
                 << "    Total Staff : " << total_staff << endl
                 << "    Total Annual Revenue : " << total_annual_revenue << endl
                 << "    Can Terminate : " << can_terminate << endl; 

        }

};



class Admin : public Manager{

    protected:
        int manager_salary = 80000;

    public:
        void myAccess(){

            cout << endl << ">>  By Admin Access : " << endl;
            cout << "    Company Name : " << company_name << endl
                 << "    Manager Salary : " << manager_salary << endl
                 << "    Employee Salary : " << employee_salary << endl
                 << "    Total Staff : " << total_staff << endl
                 << "    Total Annual Revenue : " << total_annual_revenue << endl
                 << "    Can Terminate : " << can_terminate << endl; 

        }

};


int main(){

    Admin admin;
    Manager manager;
    Employee employee;

    admin.myAccess();
    manager.myAccess();
    employee.myAccess();

    return 0;
}
