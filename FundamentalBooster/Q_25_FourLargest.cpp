/*
25. By using an easy technique, Write a C++ program to
Find Largest Number among four numbers to help Prisha
boost-up her confidence in logical building process.
*/

#include<iostream>
using namespace std;

class MaxOfFour{

    private:
    int a, b, c, d;

    public:
    //thie method set value to number
    void setter(int num1, int num2, int num3, int num4){
        a = num1;
        b = num2;
        c = num3;
        d = num4;
    }

    //checking and displaying value
    void display(){

        int max = (a>b) ? (a>c) ? (a>d) ? a :d : (c>d) ? c :d : (b>c) ? (b>d) ? b :d : (c>d) ? c :d ;

        cout << endl << "(" << max << ") is Max out of four!" <<
                endl << endl;

    }

};

//main method
int main(){

    MaxOfFour perform = MaxOfFour();
    int a, b, c, d;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        cout << endl << "Enter number(a) : ";
        cin >> a;

        cout << "Enter number(b) : ";
        cin >> b;

        cout << "Enter number(c) : ";
        cin >> c;

        cout << "Enter number(d) : ";
        cin >> d;

        //assigning value
        perform.setter(a, b, c, d);

        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

    return 0;
}