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

};

//main method
int main(){

    Arithmetic perform;

    cout << endl << "Enter the number(divisor) : ";
    cin >> perform.dividend;

    cout << "Enter the number(divisor) : ";
    cin >> perform.divisor; 

    cout << endl << "Quotient : " << setprecision(2) << (float)perform.dividend / (float)perform.divisor <<
            endl << "Remainder : " << perform.dividend % perform.divisor << 
            endl << endl; 

    return 0;
}