/*
15. Aaryan is constantly trying to Check Whether a
character is Vowel or Consonant. But for some unknown
reason he just cannot remember difference between vowel
and consonant. Write a C++ Program to provide a better
solution to Aaryan.
*/

#include<iostream>
using namespace std;


class VowelOrConsonant{

    private:
    char c;

    public:
    //thie method set value to c
    void setter(char value){c = value;}

    //checking and displaying value
    void display(){

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            cout << endl << "Given alpahbet is Vowel!" <<
                    endl << endl;
        } else {
            cout << endl << "Given alphabet is Consonant!" <<
                    endl << endl;
        }

    }

};

//main method
int main(){

    VowelOrConsonant perform = VowelOrConsonant();
    char value;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        cout << endl << "Enter alphabet : ";
        cin >> value;
        cin.ignore();

        //assigning value
        perform.setter(value);

        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

    return 0;
}