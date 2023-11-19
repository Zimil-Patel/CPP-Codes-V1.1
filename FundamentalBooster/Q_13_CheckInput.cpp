/*
13. A fourth standard student forced by his teacher to
identify if a given Character is Uppercase, Lowercase,
Digit or Special Character. Write a C++ Program to help
that student.
*/

#include<iostream>
using namespace std;

class CheckInput{

    private:
        char asciiVal;

    public:
        void setter(char input){
            asciiVal = input;
        }

        void display(){

            if (asciiVal >= 'a' && asciiVal <= 'z'){
                cout << endl << "Given input (" << asciiVal << ") is : SmallCase Alphabet" <<
                        endl << endl;
            } else if (asciiVal >= 'A' && asciiVal <= 'Z'){
                cout << endl << "Given input (" << asciiVal << ") is : UpperCase Alphabet" <<
                        endl << endl;
            } else if (asciiVal >= '0' && asciiVal <= '9'){
                cout << endl << "Given input (" << asciiVal << ") is : Digit" <<
                        endl << endl;
            } else {
                cout << endl << "Given input is : Special Character" <<
                        endl << endl;
            }

        }

};

int main(){

    CheckInput perform = CheckInput();
    char input;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        cout << endl << "Enter chracter : ";
        cin.ignore();
        cin >> input;

        perform.setter(input);
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

    return 0;
}