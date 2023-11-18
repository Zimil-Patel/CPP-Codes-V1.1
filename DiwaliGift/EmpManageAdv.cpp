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
    int showDash();
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
int DashFunctions ::showDash()
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
            break;

        //2. View all employees   
        case 2:
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
