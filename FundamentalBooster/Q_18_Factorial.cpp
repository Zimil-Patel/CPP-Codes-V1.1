/*
18. Tushar is trying very hard to teach his classmate
Harsh that how to find Factorial of a Number. Write a C++
Program for Tushar with best possibe technique.
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

        int findFactorial(int number){

            if(number == 1)
                return 1;

            return number * findFactorial(number - 1);

        }

        //display result
        void display(){

            cout << endl << "Factorial of given number(" << number << ") is :" << findFactorial(number) <<
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
