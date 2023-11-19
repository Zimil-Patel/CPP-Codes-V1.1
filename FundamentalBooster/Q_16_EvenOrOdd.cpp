/*
16. Two friends are playing a game in which they have to
check whether a given number is Even or Odd. Help them to
Write a C++ Program for that.
*/

#include<iostream>
using namespace std;

class EvenOdd{

    private:
    int number;

    public:
    //thie method set value to number
    void setter(int value){number = value;}

    //checking and displaying value
    void display(){

        if (number % 2 == 0){
            cout << endl << "Given number is Even number!" <<
                    endl << endl;
        } else {
            cout << endl << "Given number is not Odd number!" <<
                    endl << endl;
        }

    }

};

//main method
int main(){

    EvenOdd perform = EvenOdd();
    int value;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        cout << endl << "Enter number : ";
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