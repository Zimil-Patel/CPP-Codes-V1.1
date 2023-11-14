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


//display employee managment title
void showTitle(){

    cout << endl << "# # # # # # # # # # # # # # # # # # # # # #" << 
            endl << "#                                         #" << 
            endl << "#       EMPLOYEE MANAGMENT SYSTEM         #" <<
            endl << "#                                         #" <<
            endl << "# # # # # # # # # # # # # # # # # # # # # #" <<
            endl;

}


//all admin realated attribute and function are stored here
class AdminLogin{

    private:
    string adminUserName = "admin";
    string adminPass = "1234";

    public:
    void adminLogin();

};


//all AdminLogin class's functions defination are defined here...
void AdminLogin :: adminLogin()
{

    showTitle();
    string userName, pass;

    cout << endl << "-------------------------------------------" <<
            endl << "- - - - - - - - Admin Login - - - - - - - -" <<
            endl << "-------------------------------------------" <<
            endl;


    //getting userNane and password from user
    cout << endl << ">>    Enter user name : ";
    getline(cin >> ws, userName);

    cout << ">>    Enter password : ";
    getline(cin >> ws, pass);


    //animated logining screen
    cout << endl << endl << "             | Loging in |" << 
            endl << "             ";

    for (int i = 0; i < 4; i++){

        sleep(1);
        cout << "...";

    }

    cout << endl;

    //if user verified successfully redirect admin to dash board
    if (userName == adminUserName && pass == adminPass){

        cout << endl << ">> - - - - - Login Successful - - - - - <<" << 
                endl << endl;

        system("pause");
        system("cls");

    } else {

        cout << endl << ">> - - Invalid! username or password- - <<" <<
                endl << endl;

        system("pause");
        system("cls");
        adminLogin();

    }



}


//main method
int main(){

    AdminLogin adminFun;

    adminFun.adminLogin(); //perform admin login operation 

    return 0;
}


