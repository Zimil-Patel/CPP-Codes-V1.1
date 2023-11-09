/*
2. Sameer is too weak to find multiplication of any three
numbers. Write a C++ Program which helps Sameer to solve
his issue.
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

    //method to multiply three number
    int multiOfThreeNum(int num1, int num2, int num3){ 

        return num1 * num2 * num3;
    }

    //displaying multiplication of three number
    void display(){

        cout << endl << "a(" << num1 << ") * " <<
            "b(" << num2 << ") * " <<
            "c(" << num3 << ") = " << multiOfThreeNum(num1, num2, num3) << endl << endl;

    }


};


//main method
int main(){

    //printing output by calling multiOfThreeNum() method of arithmetic class

    Arithmetic perform;

    char repeat = 'y';

    while (repeat == 'y'){

        //getting user value
        perform.getValues();

        //displaying result
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

    }
    

    return 0;
}