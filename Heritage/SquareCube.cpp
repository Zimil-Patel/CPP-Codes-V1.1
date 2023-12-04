/*
Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.
*/

#include<iostream>
using namespace std;

class Arithmetic{

    protected:
        int number;

    public:
        Arithmetic(){

            cout << endl << "Enter number for Square : ";
            cin >> number;

        }

};

class Square : public Arithmetic{

    public:
        void getSuqare(){

            cout << "Suqare of " << number << " = " << number * number << endl; 

        }
};

class Cube : public Arithmetic{

    public:
        void getSuqare(){

            cout << "Cube of " << number << " = " << number * number * number << endl; 

        }

};

int main(){

    Square square;
    square.getSuqare();
    Cube cube;
    cube.getSuqare();

    return 0;
}