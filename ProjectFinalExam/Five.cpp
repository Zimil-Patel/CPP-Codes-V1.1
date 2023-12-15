
#include<iostream>
using namespace std;

class Calculator{

    private:
        float num1, num2;


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
                    cout << endl << "division is : " << num1 / num2 << endl;
            } 
            catch(float num2){

                cout << endl << "Invalid! can't divide by " << num2 << endl;

            }

        }


};


int main(){

    Calculator cal;
    cal.checkDivison();


    return 0;
}