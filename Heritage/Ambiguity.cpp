/*WAP to sovle Ambiguity error*/

#include<iostream>
using namespace std;

class A{

    protected:
        int num1;
        int sum = 0;

        void setNum1(){

            cout << "Enter number 1 : ";
            cin >> num1; 

        }

        void setSum(int num1, int num2, int num3, int num4){

            sum = num1 + num2 + num3 + num4;

        }  

};

class B : public A{

    protected:
        int num2;

        void setNum2(){

            cout << "Enter number 2 : ";
            cin >> num2; 

        }

};

class C : public A{

    protected:
        int num3;

        void setNum3(){

            cout << "Enter number 3 : ";
            cin >> num3; 

        }

};


class D : public B, C{

    protected:
        int num4;

    public:
        void setValues(){

            //using ::(scope resolution) to solve ambiguity error.
            B::setNum1();
            setNum2();
            setNum3();

            cout << "Enter number 4 : ";
            cin >> num4;

            C::setSum(B::num1, num2, num3, num4);

        };

        void getSum(){

            cout << endl << "SUM : " << C::sum <<
                    endl << endl;

        }

};


int main(){

    D perform;

    perform.setValues();
    perform.getSum();

    return 0;
}