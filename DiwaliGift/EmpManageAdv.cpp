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

//function for converting string to upper
string stringToUpper(string oString)
{

    for (int i = 0; i < oString.length(); i++)
    {
        oString[i] = toupper(oString[i]);
    }
    return oString;
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

        cout << endl << "   ID : " << id <<
                endl << "   NAME : " << name <<
                endl << "   AGE : " << age <<
                endl << "   CITY : " << city <<
                endl << "   ROLE : " << role <<
                endl << "   EXPERIENCE : " << experience << "(YEAR)" <<
                endl << "   SALARY : " << salary << " (+bonus : " << bonus << ")" <<
                endl;

    }

    //get employee private data
    int getId(){return id;}

    //get employee role
    string getRole(){return role;}

    //get employee bonus
    int getBonus(){return bonus;}

    //update employee salary
    void setSalary(int sal){salary = sal;}

};

// all dash attributes and functions are stored here
class DashFunctions
{

private:
    EmployeeData emp[3];
    int isExistEmp;
    int isFull;
    char repeat;
    int id, age, exp, sal, bonus;
    string name, role, city;
    int tax = 0, uniBonus = 0;
    int internSal = 8000;
    int juniorSal = 15000;
    int seniorSal = 30000;
    int teamLeaderSal = 45000;
    int deparmentHeadSal = 50000;
    int cooSal = 70000;

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

    //function to decide employee salary according thier role
    int getEmpSalary(string role, float tax, int bonus){

        int salary = 0;

        if (role == "INTERN")
            salary = internSal - ((internSal * tax) / 100) + bonus;
        else if (role == "JUNIOR STAFFER")
            salary = juniorSal - ((juniorSal * tax) / 100) + bonus;
        else if (role == "SENIOR STAFFER")
            salary = seniorSal - ((seniorSal * tax) / 100) + bonus;
        else if (role == "TEAM LEADER")
            salary = teamLeaderSal - ((teamLeaderSal * tax) / 100) + bonus;
        else if (role == "DEPARTMENT HEAD")
            salary = deparmentHeadSal - ((deparmentHeadSal * tax) / 100) + bonus;
        else if (role == "COO")
            salary = cooSal - ((cooSal * tax) / 100) + bonus;

        return salary;
        
    }

    //update salary of employee
    void updateSalary(float tax){

        checkIfExist();
        
        if (isExistEmp){

            for (int i = 0; i < 10; i++){

                //Chekcing is there exists an employee
                if (emp[i].getId() == 0)
                    break;
                else
                    emp[i].setSalary( getEmpSalary(emp[i].getRole(), tax, emp[i].getBonus()) );

            }

        }
    
    }

public:
    int showDash();
    void registerEmp();
    void viewEmp();
    void setTax();
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

    system("cls");

    switch(choice){

        //1. Register new employee
        case 1:
            showTitle();
            registerEmp();
            system("pause");
            break;

        //2. View all employees   
        case 2:
            showTitle();
            viewEmp();
            system("pause");
            break;

        //3. Set Tax to salary 
        case 3:
            showTitle();
            setTax();
            system("pause");
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

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - -Register Employee- - - - - - -" << endl
         << "-------------------------------------------" << endl;

    do{

        checkIfFull();

        if (isFull){

            cout << endl << ">> - - - -Employee list is full- - - - <<" <<
                    endl << endl;

        } else {

            cout << endl << ">>    Enter employee details" << endl;

            cout << endl << ">>    id : ";
            cin >> id;

            cout << ">>    name : ";
            getline(cin >> ws, name);

            cout << ">>    age : ";
            cin >> age;

            cout << ">>    experience (in year) : ";
            cin >> exp;

            cout << ">>    role : ";
            getline(cin >> ws, role);
            role = stringToUpper(role);

            cout << ">>    city : ";
            getline(cin >> ws, city);

            sal = getEmpSalary(role, tax, 0);

            for (int i = 0; i < 3; i++)
            {

                if (emp[i].getId() == 0)
                {
                    emp[i].ValueSetter(id, name, age, exp, role, sal, 0, city);
                    break;
                }

            }

            cout << endl << ">> - - - - Employee Registered - - - - <<" << 
                    endl;
        }

        cout << endl << ">>    Do you want to add another? [y/n]: ";
        cin >> repeat;

    } while(repeat == 'y' || repeat == 'Y');

    cout << endl;

}

//this function display all employee details
void DashFunctions :: viewEmp(){

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - -All Employee Data- - - - - - -" << endl
         << "-------------------------------------------" << endl;

    checkIfExist();

    if (isExistEmp == 1){

        for (int i = 0; i < 3; i++)
            if (emp[i].getId() != 0){
                
                if (emp[i].getId() != 0){

                    cout << endl << ">> Employee " << i + 1;
                    emp[i].display();

                }

            }

    } else {

        cout << endl << ">> - - -There is no employee data- - - <<" <<
                endl << endl;
    }

    cout << endl;

}

//this function used to get tax from user and apply it to employee salary
void DashFunctions :: setTax(){

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - -All Employee Data- - - - - - -" << endl
         << "-------------------------------------------" << endl;

    cout << endl << "How much tax you want to apply? : ";
    cin >> tax;

    updateSalary(tax);

    cout << endl << ">> - - -Tax applied successfully- - - <<" << 
            endl << endl;

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
