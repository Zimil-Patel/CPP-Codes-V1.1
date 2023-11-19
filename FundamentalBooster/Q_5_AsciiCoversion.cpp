/*
5. Two college collegues had argue with a ASCII value conversion method.
Write a C++ Program which provides a solution for their issue.
*/

#include<iostream>
using namespace std;

//this class include attributes and method to convert ASCII value
class ASCIIConversion{

    private:
    int AsciiValue;

    public:
    //thie method set value to AsciiValue
    void setter(int value){AsciiValue = value;}

    //conversion and displying value of given ascii value
    void display(){

        cout << endl << "Value of given ASCII value(" << AsciiValue <<") : " << char(AsciiValue) <<
                endl << endl; 

    }

};

//main method
int main(){

    ASCIIConversion perform = ASCIIConversion();
    int value;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        cout << endl << "Enter value(ASCII number) : ";
        cin >> value;

        //assigning value
        perform.setter(value);

        //converting and displaying value
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

    return 0;
}