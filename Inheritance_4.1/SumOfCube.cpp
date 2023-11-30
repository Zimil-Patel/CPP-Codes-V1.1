/*
Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
- Class X has the following members: a, b & c attributes in integer data type
- Class Y has the following members: setData() and getData() methods
*/
#include<iostream>
using namespace std;

class X{

    public:
        int a, b, c;

};

class Y : public X{

    private:
        int sum = 0;

    public:
        int findCube(int num){

            return num * num * num;

        }

        void setValues(){

            cout << endl << "Enter value of a : ";
            cin >> a;
            sum += findCube(a);

            cout << "Enter value of b : ";
            cin >> b;
            sum += findCube(b);

            cout << "Enter value of c : ";
            cin >> c;
            sum += findCube(c);

        }

        void getSum(){

            cout << endl << "Sum of all cubes (" << findCube(a) << ", " << findCube(b) << ", " << findCube(c) << ") : " << sum <<
                    endl << endl;

        }

};

int main(){

    Y perform;

    perform.setValues();
    perform.getSum();

    return 0;
}