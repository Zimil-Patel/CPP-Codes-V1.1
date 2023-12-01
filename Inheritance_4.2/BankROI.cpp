/*
Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes
*/
#include<iostream>
using namespace std;

class RBI{

    protected:
        double rate = 1.5;
        double amount;
    
    public:

        void setAmt(string bankName){

            cout << "Enter " << bankName << " Bank Amount : ";
            cin >> amount;

        }

        double getROI(int amt){

            return (amt * rate) / 100;

        }

};

class SBI : public RBI{
    
    public:

        void display(){

            cout << endl << "ROI of SBI: " << getROI(amount) ;

        }

};

class BOB : public RBI{
    
    public:

        void display(){

            cout << endl << "ROI of BOB: " << getROI(amount);

        }

};

class ICICI : public RBI{

    public:
        
        void display(){

            cout << endl << "ROI of ICICI: " << getROI(amount);

        }

};

int main(){

    SBI sbiBank;
    BOB bobBank;
    ICICI iciciBank;

    sbiBank.setAmt("SBI");
    bobBank.setAmt("BOB");
    iciciBank.setAmt("ICICI");

    sbiBank.display();
    bobBank.display();
    iciciBank.display();
    

    return 0;
}