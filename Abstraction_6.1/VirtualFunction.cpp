//WAP to solve ambiguity error - permamnent solution...
#include<iostream>
using namespace std;

class A{

    protected:
        int a = 10;

    public:
        virtual void display(){
            cout << endl << "Called in class A";
        }

};

class B : virtual public A{

    protected:
        int b = 20;

    public:
        void display(){
            cout << endl << "Called in class B";
        }

};

class C : virtual public A{

    protected:
        int c = 30;

};

class D : public B, public C{

    protected:
        int d = 40;

    public:
        void display(){

            cout << endl << "A : " << a
                 << endl << "B : " << b
                 << endl << "C : " << c
                 << endl << "D : " << d
                 << endl << endl;

        }

};

int main(){

    D d;
    d.display();

    cout << endl << ">> Virtual funtion Calls <<"
         << endl;

    A a;
    B b;
    a.display();
    b.display();
    
    A *p;
    p = &b;

    p->display();

    cout << endl << endl;

    return 0;
}
