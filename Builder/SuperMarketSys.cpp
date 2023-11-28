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
        void setItemData(int itemNumber = 0, string itemName, int itemQuantity = 0, int itemPrice = 0, int itemDiscount = 0){

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


        SuperMarket(){
            cout << endl << "- - - - - - - - - - - - - - - - - -" <<
                    endl << "> Welcome to Super Market System <" <<
                    endl << "- - - - - - - - - - - - - - - - - -" <<
                    endl << endl;
        }

};


class DashFunctions{

    private:
        int number, quantity, price, discount;
        string name;
        SuperMarket items[3];

    public:
        //show dashboard to user
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


};

//Assiging values to all static variable
string SuperMarket::marketName = "D-Mart";
string SuperMarket::userName = "admin";
string SuperMarket::password = "1234";

//main method
int main(){

    DashFunctions perform;

    return 0;
}