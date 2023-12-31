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

    //getting number from user
    void getValues(){ 

        cout << endl << "Enter the number to find cube : ";
        cin >> num;

    }

    // calculate cube of number
    int findCube(int num){ 

        return num * num * num;

    }

    //displaying cube of number
    void display(){ 

        cout << "Cube of " << 
            num << 
            " (" << num << "*" << num << "*" << num << ")" << 
            " is " << 
            findCube(num) << endl << endl; 

    }

   

};

//main method
int main(){

    Arithmetics perform = Arithmetics();

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