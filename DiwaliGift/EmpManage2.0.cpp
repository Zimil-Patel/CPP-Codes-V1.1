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

adminLogin();
->getUsernamePass;
->verify and login;
->logining in animation;
->show login status;
->use system("cls");
->showDash();

*/

#include<iostream>
using namespace std;

void showTitle(){

    cout << endl << "" << 
            endl << "" << 
            endl << "" <<
            endl << "" <<
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

    string username, pass;

}


//main method
int main(){

    AdminLogin adminFun;

    adminFun.adminLogin(); //perform admin login operation 

    return 0;
}


