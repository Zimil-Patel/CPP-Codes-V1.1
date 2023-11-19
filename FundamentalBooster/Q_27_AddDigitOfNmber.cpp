/*
27. Create a addition logic to find sum of all digits of
a given number to surpass a very challenging dream of
Tanmay. Write a C++ program to develop this system for
Tanmay.
*/

#include<iostream>
using namespace std;

class AdditionLogic{

    private:
    int number;

    public:
    //thie method set value to number
    void setter(int value){number = value;}

    int getSum(int num){

        int sum = 0;

        while(num != 0){

            sum  += (num % 10);
            num /= 10;

        }

        return sum;
    }

    //checking and displaying value
    void display(){

        cout << endl << "sum of each digit of (" << number << ") is : " <<  getSum(number) <<
                endl << endl;

    }

};

//main method
int main(){

    AdditionLogic perform = AdditionLogic();
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
