/*
Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
- a number cannot be divided by zero
- a person cannot be able to vote if his/her age is less than 18
- a password cannot be validated if it doesn’t contains an uppercase letter
*/

#include<iostream>
using namespace std;

class TryCatchScenario{

    private:
        float num1, num2;
        int age;
        string password;


    public:
        void checkDivison(){

            cout << endl << "> - - - Divison - - - <" << endl;
            cout << "Enter number 1 : ";
            cin >> num1;
            cout << "Enter number 2 : ";
            cin >> num2;

            try{

                if (num2 == 0)
                    throw num2;
                else
                    cout << endl << "Division : " << num1 / num2 << endl;
            } 
            catch(float num2){

                cout << endl << "Invalid! Can't divide by " << num2 << endl;

            }

        }

        void checkAge(){

            cout << endl << "> - - - Age Check - - - <" << endl;
            cout << "Enter age : ";
            cin >> age;

            try{

                if (age < 18)
                    throw 'e';
                else
                    cout << endl << "You are eligible for vote." << endl;

            }
            catch(...){

                cout << endl << "You are not eligible for vote." << endl;

            }

        }

        void checkPassword(){

            bool containCapital = false;

            cout << endl << "> - - - Password Check - - - <" << endl;
            cout << "Enter  password : ";
            getline(cin >> ws, password);

            for (int i = 0; i < )



        }

};


int main(){


    return 0;
}