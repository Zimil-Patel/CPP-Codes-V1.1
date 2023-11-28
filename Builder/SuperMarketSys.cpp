/*
Q.2 Write a Program to make a Supermarket Billing System.
Requirements:
(A) User Input:
- Item Number
- Item Name
- Quantity
- Price
- Discount
(B) Verify User Id And Password
(C) Display Records:
- All Records
- By Searching Item Number
*/

#include<iostream>
using namespace std;


class SuperMarket{

    private:
        static string marketName;
        static string userName;
        static string password;
        int itemNumber = 0;
        string itemName;
        int itemQuantity = 0;
        int itemPrice = 0;
        int itemDiscount = 0;
    
    public:
        //all setter methdos
        void setItemData(int itemNumber, string itemName, int itemQuantity, int itemPrice, int itemDiscount){

            this->itemNumber = itemNumber;
            this->itemName = itemNumber;
            this->itemQuantity = itemQuantity;
            this->itemPrice = itemPrice;
            this->itemDiscount = itemDiscount;

        }

        //all getter methods
        int getItemNumber(){
            return itemNumber;
        }

        string getUserName(){
            return userName;
        }

        string getPassword(){
            return password;
        }

};


class DashFunctions{

    private:
        int number, quantity, price, discount;
        string name;
        SuperMarket items[3];

    public:
        //check id pass and login
        int checkUser(string user, string pass){
            if (user == items[0].getUserName() && pass == items[0].getPassword()){
                cout << endl << ">> Login Successful <<" <<
                        endl << endl;
                system("pause");
                system("cls");
                return 1;
            } else {
                system("cls");
                cout << endl << ">> Username or pass incorrect, try again! <<" <<
                        endl << endl; 
                return 0;
            }
        }

        //show dashboard to user and get choice
        int showDash(){

            int choice;
            cout << endl << "- - - - - - - - - - - - - - - - - -" <<
                    endl << "1. Add Records" <<
                    endl << "2. Display all records" <<
                    endl << "3. Search Record" <<
                    endl << "4. Logout" <<
                    endl << "- - - - - - - - - - - - - - - - - -" <<
                    endl;
            cout << "Enter your choice[1/2/3/4]: ";
            cin >> choice;

            return choice;

        }


        //default constructor
        DashFunctions(){
            cout << endl << "- - - - - - - - - - - - - - - - - -" <<
                    endl << "> Welcome to Super Market System <" <<
                    endl << "- - - - - - - - - - - - - - - - - -" <<
                    endl << endl;
        }


};

//Assiging values to all static variable
string SuperMarket::marketName = "D-Mart";
string SuperMarket::userName = "admin";
string SuperMarket::password = "1234";

//main method
int main(){

    DashFunctions perform;
    int loginStatus = 0;
    int choice = 0;
    string user, pass;

    //force user to login until getting correct username and pass
    while(loginStatus == 0){

        cout << endl << "Enter username : ";
        getline(cin >> ws, user);

        cout << "Enter password : ";
        getline(cin >> ws, pass);

        loginStatus = perform.checkUser(user, pass);
    }

    while(loginStatus){

        choice = perform.showDash();

        switch(choice){

            case1 :
            system("cls");
            break;

            case 2:
            system("cls");
            break;

            case 3:
            system("cls");
            break;

            case 4:
            cout << endl << ">> Logout Successfull <<" <<
                    endl << endl;
            loginStatus = 0;
            break;

        }

    }

    return 0;
}