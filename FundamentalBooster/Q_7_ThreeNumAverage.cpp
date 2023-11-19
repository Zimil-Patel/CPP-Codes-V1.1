/*
7. Priyank needs to find an average of three numbers to
gain required passing marks in exam. Write a C++ Program
to helps Priyank to solve his issue.
*/

#include<iostream>
using namespace std;


//class of arithmetic methods and attributes
class Arithmetic {

    public:
    int num1, num2, num3;

    // getting values from user
    void getValues(){   
  
        cout << endl << "Enter number(a) : ";
        cin >> num1;

        cout << "Enter number(b) : ";
        cin >> num2;

        cout << "Enter number(c) : ";
        cin >> num3;

    }

    //method to average three number
    int avgOfThreeNum(int num1, int num2, int num3){ 

        return (num1 + num2 + num3) / 3;
    }

    //displaying average of three number
    void display(){

        cout << endl << "Average of this three marks is : " << avgOfThreeNum(num1, num2, num3) << endl << endl;

    }


};


//main method
int main(){

    //printing output by calling avgOfThreeNum() method of arithmetic class

    Arithmetic perform;

    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        //getting user value
        perform.getValues();

        //displaying result
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }
    

    return 0;
}