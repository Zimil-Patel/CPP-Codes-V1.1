/*
1. Meena face an isuue to perform a mathematical
operation to find a cube of any number. Write a C++
Program which helps Meena to solve her issue.
*/

#include<iostream>
using namespace std;

//class of arithmetic methods and attributes
class Arithmetics{

    public:

    int num;

    int findCube(int num){

        return num * num * num; //returing cube of number
    };

};

//main method
int main(){

    Arithmetics cubeOfNumber; //making object of Arithmetic class

    cout << endl << "Enter the number to find cube : ";
    cin >> cubeOfNumber.num;

    cout << "Cube of " << 
            cubeOfNumber.num << 
            " (" << cubeOfNumber.num << "*" << cubeOfNumber.num << "*" << cubeOfNumber.num << ")" << 
            " is " << 
            cubeOfNumber.findCube(cubeOfNumber.num) << endl << endl; //calling findCube method

    return 0;
}