/*
4. Two classmates wants to exchange their seating with each other. But the problem is that there are only two 
chairs in the small classroom which already aquires by them. Write a C++ Program which provides a solution for
this particular problem.
*/

#include<iostream>
using namespace std;

//swapping attributes and methods are stored here
class SwapValues{

    private:
    int a, b;

    public:
    //set values to a and b
    void setter(int num1, int num2){
        a = num1;
        b = num2;
    }

    //swapping values
    void swap(){

        a = a + b;
        b = a - b;
        a = a - b;

    }

    //display the values of num 1 and num 2
    void display(string varName){

        cout << endl << varName <<
                endl << "- - - - - - - -" <<
                endl << "a : " << a <<
                endl << "b : " << b <<
                endl << endl;

    }

};


//main method
int main(){

    //creating object of class
    SwapValues perform = SwapValues();
    int a, b;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        cout << endl << "Enter value of a : ";
        cin >> a;

        cout << "Enter value of b : ";
        cin >> b;

        //before swapping assigning value and displaying value
        perform.setter(a, b);
        perform.display("Before swapping");

        //calling swap method to swap values
        perform.swap();

        //after swapping displaying value
        perform.display("After swapping");

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

    return 0;
}

