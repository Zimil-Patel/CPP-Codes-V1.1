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
        static string date;
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
            this->itemName = itemName;
            this->itemQuantity = itemQuantity;
            this->itemPrice = itemPrice;
            this->itemDiscount = itemDiscount;

        }

        //all getter methods
        int getItemNumber(){
            return itemNumber;
        }

        string getItemName(){
            return itemName;
        }

        int getItemQuantity(){
            return itemQuantity;
        }

        int getItemPrice(){
            return itemPrice;
        }

        int getItemDiscout(){
            return itemDiscount;
        }

        string getUserName(){
            return userName;
        }

        string getPassword(){
            return password;
        }

        string getDate(){
            return date;
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

        //add records 
        void addRecords(){

            cout << endl << "- - - - - - - - - - - - - - - - - -" <<
                    endl << "          > Add Records <" <<
                    endl << "- - - - - - - - - - - - - - - - - -" <<
                    endl << endl;

            //check if list is full or not
            if(items[2].getItemNumber() != 0){

                cout << endl << ">> Can't add more list is full! <<" <<
                        endl << endl;
                system("pause");
                system("cls");

            } else {

                for (int i = 0; i < 3; i++){

                    if (items[i].getItemNumber() == 0){
                        cout << endl << ">>    Enter item " << i + 1 << " details" <<
                                endl;
                        //number
                        cout << "Item Number : ";
                        cin >> number;
                        //name
                        cout << "Item Name : ";
                        getline(cin >> ws, name);
                        //quantity
                        cout << "Item Quantity : ";
                        cin >> quantity;
                        //price
                        cout << "Item Price : ";
                        cin >> price;
                        //discount
                        cout << "Item Discount : ";
                        cin >> discount;

                        items[i].setItemData(number, name, quantity, price, discount);

                        cout << endl << ">> Item Added <<" <<
                                endl;
                    } else {
                        continue;
                    }

                }

                system("pause");
                system("cls");

            }


        }

        void DisplayRecords(){

            cout << endl << "- - - - - - - - - - - - - - - - - -" <<
                    endl << "          > All Records <" <<
                    endl << "- - - - - - - - - - - - - - - - - -" <<
                    endl << endl;

            //check if an data exist
            if(items[0].getItemNumber() == 0){
                cout << endl << ">> There is no Records(items) <<" <<
                        endl << endl;
                system("pause");
                system("cls");
            } else {

                for (int i = 0; i < 3; i++){

                    if (items[i].getItemNumber() == 0)
                        continue;
                    else {

                        cout << endl << "Item " << i + 1 <<
                                endl << "date : " << items[i].getDate() <<
                                endl << "Item Number : " << items[i].getItemNumber() <<
                                endl << "Item Name : " << items[i].getItemName() <<
                                endl << "Item Quantity : " << items[i].getItemQuantity() <<
                                endl << "Item Price : " << items[i].getItemPrice() << "( With discount " << items[i].getItemPrice() - items[i].getItemDiscout() << ")" <<
                                endl << "Item Discount : " << items[i].getItemDiscout() <<
                                endl;

                    }

                }
                system("pause");
                system("cls");
            }

        }

        //Search Item
        void searchItem(){

            int number;
            int foundStatus = 0;
            int foundAt = 0;
            cout << endl << "- - - - - - - - - - - - - - - - - -" <<
                    endl << "        > Seaarch Records <" <<
                    endl << "- - - - - - - - - - - - - - - - - -" <<
                    endl << endl;

            cout << endl << "Enter item number to search : ";
            cin >> number;

            if (number == 0){
                foundStatus = 0;
            } else {

                //seacrh the number in records
                for (int i = 0; i < 3; i++){

                    if(number == items[i].getItemNumber()){
                        foundStatus = 1;
                        foundAt = i;
                    }

                }

            }

            

            //dislplay if found
            if (foundStatus){

                cout << endl << "Item " << foundAt + 1 <<
                                endl << "date : " << items[foundAt].getDate() <<
                                endl << "Item Number : " << items[foundAt].getItemNumber() <<
                                endl << "Item Name : " << items[foundAt].getItemName() <<
                                endl << "Item Quantity : " << items[foundAt].getItemQuantity() <<
                                endl << "Item Price : " << items[foundAt].getItemPrice() << "( With discount " << items[foundAt].getItemPrice() - items[foundAt].getItemDiscout() << ")" <<
                                endl << "Item Discount : " << items[foundAt].getItemDiscout() <<
                                endl;

                system("pause");
                system("cls");

            } else {

                cout << endl << "No record found!" << 
                        endl << endl;

                system("pause");
                system("cls");

            }

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
string SuperMarket::date = "28-11-2023";
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

            case 1:
                system("cls");
                perform.addRecords();
                 break;

            case 2:
                system("cls");
                perform.DisplayRecords();
                break;

            case 3:
                system("cls");
                perform.searchItem();
                break;

            case 4:
                cout << endl << ">> Logout Successfull <<" <<
                        endl << endl;
                loginStatus = 0;
                break;

            default:
                system("Invalid choice!");
                break;

        }

    }

    return 0;
}