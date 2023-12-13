/*
Q.1 Write a Program to create a class that illustrates the concept of handling 
all types of exceptions using general exceptions.
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
                    throw 0;
                else
                    cout << endl << "You are eligible for vote." << endl;

            }
            catch(int e){

                cout << endl << "You are not eligible for vote." << endl;

            }

        }

        void checkPassword(){

            bool containCapital = false;

            cout << endl << "> - - - Password Check - - - <" << endl;
            cout << "Enter  password : ";
            getline(cin >> ws, password);

            try{

                for (int i = 0; i < password.length(); i++){

                    if (password[i] >= 'A' && password[i] <= 'Z'){
                        containCapital = true;
                        break;
                    }

                }

                if (containCapital)
                    cout << endl << "Valid password." << endl;
                else
                    throw 'e'; 

            }
            catch(...){

                cout << endl << "Invalid! password must contain at least one uppercase letter." << endl;

            }

        }

};


int main(){

    TryCatchScenario t;
    t.checkDivison();
    t.checkAge();
    t.checkPassword();

    cout << endl;

    return 0;
}