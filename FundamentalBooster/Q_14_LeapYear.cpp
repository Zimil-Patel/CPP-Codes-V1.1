/*
14. Gaurav must have to teach his little 5 years old baby
to check whether a given year is leap year or not. Write
a C++ Program to provide a solution for Gaurav.
*/

#include<iostream>
using namespace std;

//this class include attributes and method to convert ASCII value
class LeapYear{

    private:
    int year;

    public:
    //thie method set value to year
    void setter(int value){year = value;}

    //checking and displaying value
    void display(){

        if (year % 4 == 0){
            cout << endl << "Given year is leap year!" <<
                    endl << endl;
        } else {
            cout << endl << "Given year is not leap year!" <<
                    endl << endl;
        }

    }

};

//main method
int main(){

    LeapYear perform = LeapYear();
    int value;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        cout << endl << "Enter year : ";
        cin >> value;

        //assigning value
        perform.setter(value);

        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

    return 0;
}