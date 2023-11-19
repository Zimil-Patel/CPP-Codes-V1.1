/*
17. Sameer needs to master a technique to find if a given
number is Prime number or not for his best presentation
at the Teachers Day to impress his Math teacher. Help
sameer to Write a C++ Program with best technique.
*/

#include<iostream>
using namespace std;

class PrimeNumberCheck{

    private:
    int number;

    public:
    //thie method set value to number
    void setter(int value){number = value;}

    //checking and displaying value
    void display(){

        int divisor;
        char flag = 'y';

        if (number == 1){
            cout << endl << "Given number is neither prime nor composite!" <<
                    endl << endl;
        } else {

            for (divisor = 2; divisor <= number; divisor++)
            {

                if (divisor == number)
                {
                    continue;
                }
                else
                {

                    if (number % divisor == 0)
                    {

                        flag = 'n';
                        break;
                    }
                    else
                    {

                        flag = 'y';
                    }
                }
            }
        

            if (flag == 'y'){
                cout << endl << "Given number is Prime number!" <<
                        endl << endl;
            } else {
                cout << endl << "Given number is not Prime number!" <<
                        endl << endl;
            }
            
        }

    }

};

//main method
int main(){

    PrimeNumberCheck perform = PrimeNumberCheck();
    int value;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        cout << endl << "Enter number : ";
        cin >> value;

        //assigning value
        perform.setter(value);

        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

    return 0;
}