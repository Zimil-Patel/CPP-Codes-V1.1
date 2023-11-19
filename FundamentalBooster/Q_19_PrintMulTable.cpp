/*
19. Write a C++ program to Print Table of any Number less
than 10. A group of needy newbie math students will
appriciate your help for your help.
*/

#include<iostream>
using namespace std;

class Arithmetic{

    private:
        int number;

    public:
        //set values to number and 
        void setter(int num){
            number = num;
        }

        //display result
        void display(){

            if (number > 0 && number <= 10){

                cout << endl << "Multiplication table of " << number << endl;

                for (int i = 1; i <= 10; i++){

                    cout << number << " * " << i << " = " << (number * i) << endl;

                }

                cout << endl;

            } else {

                cout << endl << "Enter number between 1 to 10!"  << 
                        endl << endl;

            }

        }

};


int main(){

    //creating object of Arithmetic class
    Arithmetic perform = Arithmetic();
    int num;

    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        //getting values from user
        cout << endl << "Enter number : ";
        cin >> num;

        //assign values
        perform.setter(num);
        //dislay result for given values
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

}
