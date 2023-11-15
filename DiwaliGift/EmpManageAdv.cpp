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

// all dash attributes and functions are stored here
class DashFunctions
{

public:
    void showDash();
};

// all AdminLogin class's functions defination are defined here...
int AdminLogin ::adminLogin()
{

    showTitle();
    string userName, pass;

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - - - Admin Login - - - - - - - -" << endl
         << "-------------------------------------------" << endl;

    // getting userNane and password from user
    cout << endl
         << ">>    Enter user name : ";
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

        cout << endl
             << ">> - - - - - Login Successful - - - - - <<" << endl
             << endl;

        system("pause");
        system("cls");
        return 1;
    }
    else
    {

        cout << endl
             << ">> - - Invalid! username or password- - <<" << endl
             << endl;

        system("pause");
        system("cls");
        adminLogin();
    }
}

// display different options to user and asking which operation admin want to perform
void DashFunctions ::showDash()
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
}

// main method
int main()
{

    AdminLogin adminFun;
    DashFunctions dashfun;

    // calling adminLogin();
    int loginStatus = adminFun.adminLogin();

    while (loginStatus)
    {

        // calling showDash(); function
        dashfun.showDash();
    }

    return 0;
}
