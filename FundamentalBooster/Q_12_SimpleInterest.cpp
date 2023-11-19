/*
12. A math teacher wants to teach how to find a Simple
Interest. Write a C++ Program to provide a solution for
this.
*/

#include<iostream>
using namespace std;

class Arithmetic{

    private:
        int principleAmt, time;
        float rate;

    public:
        void setter(int p, float r, int t){

            principleAmt = p;
            rate = r;
            time = t;

        }

        void display(){

            cout << endl << "Simple interest is : " << (float) (principleAmt * rate * time) / 100 <<
                    endl << endl;

        }

};


int main(){

    Arithmetic perform = Arithmetic();
    int p, t;
    float r;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        cout << endl << "Enter principle amount(p) : ";
        cin >> p;

        cout << "Enter rate of interest(r) : ";
        cin >> r;

        cout << "Enter time(t) : ";
        cin >> t;

        perform.setter(p, r, t);
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

    return 0;
}