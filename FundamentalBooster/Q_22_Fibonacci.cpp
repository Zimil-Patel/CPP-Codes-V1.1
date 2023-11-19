/*
22. Write a C++ Program to find Fibonacci Series upto N
numbers to help Darshan by passing fastest-finger first
round for entering Coding Quiz competition.
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

        int findFibonacci(int number){

            if (number != 0)
                cout << number;
            else
                cout << "1";

            if(number != 0)
                cout << " + ";

            if(number == 0)
                return 1;

            return number + findFibonacci(number - 1);

        }

        //display result
        void display(){

            cout << endl << "Fibonacci of given number(" << number << ") is : " << findFibonacci(number) <<
                    endl << endl;

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
