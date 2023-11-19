/*
6. An IT company wants to generate random number of 6 digits long 
and send it to its employees. Write a C++ Program to help this IT company.
*/

#include<iostream>
#include<cstdlib>
using namespace std;

//this class include methos to generate random number
class RandomNumber{

    private:
        int RandomNum;

    public:
        //generate random number of 6 digit
        void generateRNum(){

            RandomNum = 0;
            for(int i = 0; i < 6; i++){

                RandomNum = (RandomNum * 10) + rand() % 9;

            }

        }


        //display random number
        void display(){

            cout << endl << "Random Number : " << RandomNum <<
                    endl << endl;

        }


};

//main method
int main(){

    RandomNumber perform = RandomNumber();
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        perform.generateRNum();
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

}