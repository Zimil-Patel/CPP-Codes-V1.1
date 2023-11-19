/*
8. A sport coach needs to convert submitted participants’
inches into feet and inches for height measurement. Write
a C++ Program to provide a solution for this.
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