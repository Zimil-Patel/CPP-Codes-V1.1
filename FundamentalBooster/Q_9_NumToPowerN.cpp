/*
9. An innocent boy must have to solve that how to raise
any number(Base) to power N for proving his common
ability among all classmates. Write a C++ Program to
provide a solution for this boy.
*/
#include<iostream>
#include<cmath>
using namespace std;

//all related attributes and method are stored in this class
class Arithmetic{

    private:
        int number, power;

    public:
        //set values to number and power
        void setter(int num, int pow){
            number = num;
            power = pow;
        }

        //calculate and display result
        void display(){

            cout << endl << number << " power " << power << " = " << pow(number, power) <<
                    endl << endl;

        }

};


int main(){

    //creating object of Arithmetic class
    Arithmetic perform = Arithmetic();
    int num, pow;

    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        //getting values from user
        cout << endl << "Enter number : ";
        cin >> num;

        cout << endl << "Enter power : ";
        cin >> pow;

        //assign values
        perform.setter(num, pow);
        //dislay result for given values
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

}