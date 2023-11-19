/*
11. Raman have an idea to impress his Computer Teacher by
solving Square Root of a number without using any
programming library. Write a C++ Program to help Raman.
*/

#include<iostream>
using namespace std;

class Arithmetic{

    private:
        int number;
        float root;

    public:
        void setter(int num){
            number = num;
            root = 0;
            for (int i = 1; i <= (num / 2); i++){

                if (i * i == num){
                    root = i;
                    break;
                }

            }
        }

        void display(){

            if (root != 0){
                cout << endl << "Square root of (" << number << ") : " << root <<
                        endl << endl; 
            } else {
                cout << endl << "Sorry! can't find square root for " << number <<
                        endl << endl;
            }

        }

};


int main(){

    Arithmetic perform = Arithmetic();
    int num;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        cout << endl << "Enter number : ";
        cin >> num;

        perform.setter(num);
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

    return 0;
}