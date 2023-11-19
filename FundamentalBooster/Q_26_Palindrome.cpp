/*
26. Develop a simple comparision system which identify if
given number is Palindrome or not. By this system, a bank
employee will appriciate your help. Write a C++ program
for developing this system.
*/

#include<iostream>
using namespace std;

class Palindrome{

    private:
    int number;

    public:
    //thie method set value to number
    void setter(int value){number = value;}

    int ReverseNum(int num){

        int revNum = 0;

        while(num != 0){

            revNum = (revNum * 10) + num % 10;
            num /= 10;

        }

        return revNum;
    }

    //checking and displaying value
    void display(){

        if (number == ReverseNum(number)){
            cout << endl << "Given number is Palindrome number!" <<
                    endl << endl;
        } else {
            cout << endl << "Given number is not Palindrome number!" <<
                    endl << endl;
        }

    }

};

//main method
int main(){

    Palindrome perform = Palindrome();
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
