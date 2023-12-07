/*
Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.
*/
#include<iostream>
using namespace std;


class Arithmetic{

    private:
        int number;

    public:
        void setNumber(int num){

            this->number = num;

        }

        int getNumber(){
            return number;
        }

        //compare two objects value 
        int operator<(Arithmetic obj){

            if (this->number < obj.number)
                return 1;
            else
                return 0;

        }

};

main(){

    Arithmetic a1, a2;

    int num;
    cout << endl << "Enter number for Object(a1) : ";
    cin >> num;
    a1.setNumber(num);

    cout << "Enter number for Object(a2) : ";
    cin >> num;
    a2.setNumber(num);

    if(a1 < a2)
        cout << endl << "Object(a2) contain higher value (" << a2.getNumber() << ")" <<
                endl << endl;
    else
        cout << endl << "Object(a1) contain higher value (" << a1.getNumber() << ")" <<
                endl << endl;

}