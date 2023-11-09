/*
3. A student in a fifth class encounters a very easy math
problem to find quotient and remainder. Write a C++
Program which provides a solution for this particular
problem.
*/

#include<iostream>
#include <iomanip>
using namespace std;


//arithmetic class with arithmetic methods and attributes
class Arithmetic{

    public:

    int dividend, divisor;

    //getting values from user
    void getValues(){

        cout << endl << "Enter the number(divisor) : ";
        cin >> dividend;

        cout << "Enter the number(divisor) : ";
        cin >> divisor; 

    }

    //displaying result quotient and remainder
    void display(){

        cout << endl << "Quotient : " << setprecision(2) << (float)dividend / (float)divisor <<
            endl << "Remainder : " << dividend % divisor << 
            endl << endl; 

    }

};

//main method
int main(){

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