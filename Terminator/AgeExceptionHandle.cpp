/*
Q.2 Write a Program to throw 0 if the age of the user is less than 18, 
otherwise print that you are eligible to vote. Also, 
handle that thrown exception and print you are not eligible to vote.
*/

#include<iostream>
using namespace std;

class TryCatchScenario{

    private:
        int age;

    public:

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

    

};


int main(){

    TryCatchScenario t;
    t.checkAge();

    cout << endl;

    return 0;
}