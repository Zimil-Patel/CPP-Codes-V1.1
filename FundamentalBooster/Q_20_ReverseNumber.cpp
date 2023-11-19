/*
20. A Teacher give a punishment to all students to find
reverse numbers of given 3 random numbers by logically
under 15 minutes. Write a C++ Program to provide a
solution for this problem.
*/

#include<iostream>
using namespace std;

class Arithmetic{

    private:
        int number1, number2, number3;

    public:
        int ReverseNum(int num){

            int revNum = 0;

            while(num != 0){

                revNum = (revNum * 10) + num % 10;
                num /= 10;

            }

            return revNum;
        }

        //set values to number and 
        void setter(int num1, int num2, int num3){
            number1 = ReverseNum(num1);
            number2 = ReverseNum(num2);
            number3 = ReverseNum(num3);

        }

        //display result
        void display(){

            cout << endl << "Reversed numbers" << 
                    endl << "number 1 : " << number1 <<
                    endl << "number 2 : " << number2 <<
                    endl << "number 3 : " << number3 <<
                    endl << endl;

        }

};


int main(){

    //creating object of Arithmetic class
    Arithmetic perform = Arithmetic();
    int num1, num2, num3;

    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        //getting values from user
        cout << endl << "Enter number 1 : ";
        cin >> num1;

        cout << "Enter number 2 : ";
        cin >> num2;

        cout << "Enter number 3 : ";
        cin >> num3;

        //assign values
        perform.setter(num1, num2, num3);

        //dislay result for given values
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

}
