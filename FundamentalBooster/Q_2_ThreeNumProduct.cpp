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

    int multiOfThreeNum(int num1, int num2, int num3){ 

        return num1 * num2 * num3;
    }; //method to multiply three number


};


//main method
int main(){

    int a, b, c;

    // getting values from user
    cout << endl << "Enter number(a) : ";
    cin >> a;

    cout << "Enter number(b) : ";
    cin >> b;

    cout << "Enter number(c) : ";
    cin >> c;


    //printing output by calling multiOfThreeNum() method of arithmetic class

    Arithmetic perform;

    cout << endl << "a(" << a << ") * " <<
            "b(" << b << ") * " <<
            "c(" << c << ") = " << perform.multiOfThreeNum(a, b, c) << endl << endl;

    return 0;
}