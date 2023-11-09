/*
Q.1 Write a Program to create a class to read and add two distances.
For example,
Input:
input1 => feet: 8, inch: 16
input2 => feet: 4, inch: 14

Output:
14 feet 6 inch
*/

#include<iostream>
using namespace std;

//class with methods and attributes to convert inches into feet
class FeetInch{

    public:

    //getting values from user
    int getValues(string varName){

        int value;

        cout << "Enter " << varName;
        cin >> value;

        return value;
    }

    //converting inches into feet and displaying result
    void display(int feet, int inches){
    
        cout << endl << "Feet : " << feet + (inches / 12) << endl << "Inches : " << inches % 12 << endl << endl;

    }

};



//main method
int main(){

    FeetInch perform = FeetInch();

    int feet, inches;

    char repeat = 'y';

    while (repeat == 'y'){

        feet = 0;
        inches = 0;

        for (int i = 0; i < 2; i++){

            cout << endl << "input => " << i + 1 << endl;

            //getting user value
            feet += perform.getValues("feet : ");
            inches += perform.getValues("inches : ");
            

        }

        //displaying result
        perform.display(feet, inches);

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

    }

    return 0;
}