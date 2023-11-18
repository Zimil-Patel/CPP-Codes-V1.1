/*
    We are going to develop employee management system where admin can perform following tasks:
    ->admin login;
    ->add employee;
    ->remove employee;
    ->view all employee;
    ->manage salary;
    ->set tax;
    ->set bonus;
    ->modify employee role;
*/

/* todo : 1

showTitle();
->display employee management Title

adminLogin();
->getUsernamePass;
->verify and login;
->logining in animation;
->show login status;
->use system("cls");
->showDash();

*/

#include <iostream>
#include <unistd.h>

using namespace std;
using namespace std;

// display employee managment title
void showTitle()
{

    cout << endl
         << "# # # # # # # # # # # # # # # # # # # # # #" << endl
         << "#                                         #" << endl
         << "#       EMPLOYEE MANAGMENT SYSTEM         #" << endl
         << "#                                         #" << endl
         << "# # # # # # # # # # # # # # # # # # # # # #" << endl;
}

// all admin realated attribute and function are stored here
class AdminLogin
{

private:
    string adminUserName = "admin";
    string adminPass = "1234";

public:
    int adminLogin();
};

//all employee related attributes are store here...
class EmployeeData{

private:
    int id = 0;
    string name;
    int age = 0;
    int experience = 0;
    string role;
    int salary = 0;
    int bonus = 0;
    string city;

public:
    //assign values to private employee data
    void ValueSetter(int emp_id, string emp_name, int emp_age, int emp_exp, string emp_role, int emp_sal, int emp_bonus, string emp_city){

        id = emp_id;
        name = emp_name;
        age = emp_age;
        experience = emp_exp;
        role = emp_role;
        salary = emp_sal;
        bonus = emp_bonus;
        city = emp_city;

    }

    //get all employee data
    void display(){

        cout << endl << id <<
                endl << name <<
                endl << age <<
                endl << city <<
                endl << role <<
                endl << experience <<
                endl << salary;

    }

    //get employee private data
    int getId(){return id;}

};

// all dash attributes and functions are stored here
class DashFunctions
{

private:
    EmployeeData emp[3];
    int isExistEmp;
    int isFull;
    int id, age, exp, sal, bonus;
    string name, role, city;

    //check if there exist and employee in employee list
    void checkIfExist(){

        isExistEmp = 1;

        if (emp[0].getId() == 0)
            isExistEmp = 0;

    }

    //check if employee list is full
    void checkIfFull(){

        isFull = 0;

        if(emp[3- 1].getId() != 0)
            isFull = 1;

    }

public:
    int showDash();
    void registerEmp();
    void viewEmp();
};

// all AdminLogin class's functions defination are defined here...
int AdminLogin :: adminLogin()
{

    showTitle();
    string userName, pass;

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - - - Admin Login - - - - - - - -" << endl
         << "-------------------------------------------" << endl;

    // getting userNane and password from user
    cout << endl << ">>    Enter user name : ";
    getline(cin >> ws, userName);

    cout << ">>    Enter password : ";
    getline(cin >> ws, pass);

    // animated logining screen
    cout << endl
         << endl
         << "             | Loging in |" << endl
         << "             ";

    for (int i = 0; i < 4; i++)
    {

        sleep(1);
        cout << "...";
    }

    cout << endl;

    // if user verified successfully redirect admin to dash board
    if (userName == adminUserName && pass == adminPass)
    {

        cout << endl << ">> - - - - - Login Successful - - - - - <<" << 
                endl << endl;

        system("pause");
        system("cls");
        return 1;
    }
    else
    {

        cout << endl << ">> - - Invalid! username or password- - <<" << 
                endl << endl;

        system("pause");
        system("cls");
        adminLogin();
    }
}

// display different options to user and asking which operation admin want to perform
int DashFunctions :: showDash()
{

    showTitle();

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - - - Dash  Board - - - - - - - -" << endl
         << "-------------------------------------------" << endl;

    int choice;

    cout << endl
         << "#-#-#-#-#-#-#--- Dash-Board ---#-#-#-#-#-#-#" << endl
         << "#                                          #" << endl
         << "#       1. Register new employee           #" << endl
         << "#       2. View all employees              #" << endl
         << "#       3. Set Tax to salary               #" << endl
         << "#       4. Set bonus to salary             #" << endl
         << "#       5. Fire employee                   #" << endl
         << "#       6. Logout & Exit                   #" << endl
         << "#                                          #" << endl
         << "# # # # # # # # # # # # ## # # # # # # # # #" << endl;

    // getting choice from user
    cout << endl << ">>    Enter your choice [1/2/3/4/5/6] : ";
    cin >> choice;

    switch(choice){

        //1. Register new employee
        case 1:
            registerEmp();
            system("pause");
            break;

        //2. View all employees   
        case 2:
            viewEmp();
            system("pause");
            break;

        //3. Set Tax to salary 
        case 3:
            break;

        //4. Set bonus to salary 
        case 4:
            break;

        //5. Fire employee
        case 5:
            break;

        //6. Logout & Exit
        case 6:
            cout << endl << ">> - - - - - Logout Successful - - - - <<" << 
                    endl << endl;
            system("pause");
            //defining loging status 0 by returing 0
            return 0;
            break;

        //when user enter invalid option
        default:
            cout << endl << ">> - - Invalid! Enter valid choice - - <<" 
                 << endl << endl;
            system("pause");

    }

    return 1;
}

//this function is used to register new employee by geeting employee details from admin
void DashFunctions :: registerEmp(){

    checkIfFull();

    if (isFull){

        cout << endl << ">> - - - -Employee list is full- - - - <<" <<
                endl << endl;

    } else {

        cout << endl << ">>    id : ";
        cin >> id;

        cout << ">>    name :";
        getline(cin >> ws, name);

        cout << ">>    age : ";
        cin >> age;

        cout << ">>    experience (in year) : ";
        cin >> exp;

        cout << ">>    role :";
        getline(cin >> ws, role);

        cout << ">>    city :";
        getline(cin >> ws, city);

        for (int i = 0; i < 3; i++){

            if (emp[i].getId() == 0){

                emp[i].ValueSetter(id, name, age, exp, role, 0, 0, city);
                break;
            
            }

        }

        cout << endl << ">> - - - - Employee Registered - - - - <<" <<
                endl << endl;

    }

}

//this function display all employee details
void DashFunctions :: viewEmp(){

    checkIfExist();

    if (isExistEmp == 1){

        for (int i = 0; i < 3; i++)
            if (emp[i].getId() != 0)
                emp[i].display();

    } else {

        cout << endl << ">> - - -There is no employee data- - - <<" <<
                endl << endl;
    }

}

// main method
int main()
{

    AdminLogin adminFun;
    DashFunctions dashfun;

    // calling adminLogin();
    int loginStatus = adminFun.adminLogin();

    int confirmExit = 'y';

    while (loginStatus)
    {

        // calling showDash(); getting login status value 
        loginStatus = dashfun.showDash();
        system("cls");

        // //asking admin to exit
        // if (!loginStatus){

        //     cout << endl << ">>    Are you sure you want to exit ? [y/n]: ";
        //     cin.ignore();
        //     cin >> confirmExit;

        //     if (confirmExit == 'y' || confirmExit == 'Y')
        //         break;
        //     else
        //         loginStatus = adminFun.adminLogin();

        // }

    }

    return 0;
}
