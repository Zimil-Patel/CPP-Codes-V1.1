/*
24. By writing a logic for checking if a given number is
Armstrong or Not, Mayur will be qualified for an entrance
exam. Write a C++ Program for Mayur to qualify.
*/

#include<iostream>
using namespace std;

class Armstrong{

    private:
    int number;

    public:
    //thie method set value to number
    void setter(int value){number = value;}

    // calculate cube of number
    int findCube(int num){ 

        return num * num * num;

    }

    int getArmstrong(int num){

            int armstrongNum = 0;

            while(num != 0){

                armstrongNum += findCube(num % 10);
                num /= 10;

            }

            return armstrongNum;
    }

    //checking and displaying value
    void display(){

        cout << getArmstrong(number);

        if (number == getArmstrong(number)){
            cout << endl << "Given number is Armstrong number!" <<
                    endl << endl;
        } else {
            cout << endl << "Given number is not Armstrong number!" <<
                    endl << endl;
        }

    }

};

//main method
int main(){

    Armstrong perform = Armstrong();
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