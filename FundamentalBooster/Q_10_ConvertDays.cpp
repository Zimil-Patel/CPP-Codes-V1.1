/*
10. A brand new smart device which meant to convert total
provided Days Into Years, Weeks and Days. But for some
technical interruption, that device stops working
properly. Write a C++ Program to provide a solution for
this.
*/

#include<iostream>
using namespace std;

//all methods and attributes are stored here
class ConvertDays{

    private:
        int years, weeks, days;

    public:
        //calculate and set values to years week and days
        void setter(int d){
            days = d;
            years = days / 365;
            days = days - (years * 365);
            weeks = days / 7;
            days = days - (weeks * 7);
        }

        //display year week days
        void display(){

            cout << endl << "Year : " << years <<
                    endl << "Week : " << weeks <<
                    endl << "Day : " << days <<
                    endl << endl;

        }

};


//main method
int main(){

    //creating object
    ConvertDays perform = ConvertDays();
    int days;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        cout << endl << "Enter days : ";
        cin >> days;

        //assigning values
        perform.setter(days);

        //display result
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

    return 0;
}