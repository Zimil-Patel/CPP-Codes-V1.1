/*
20. A Teacher give a punishment to all students to find
reverse numbers of given 3 random numbers by logically
under 15 minutes. Write a C++ Program to provide a
solution for this problem.
*/

#include<iostream>
using namespace std;

class CountDigit{

    private:
        int number;

    public:
        int countDigit(int num){

            int counter = 0;

            if (num == 0)
                return 1;

            while(num != 0){

                counter++;
                num /= 10;

            }

            return counter;
        }

        //set values to number and 
        void setter(int num){
            number = num;
        }

        //display result
        void display(){

            cout << endl << "Number of digits : " << countDigit(number) <<
                    endl << endl;

        }

};


int main(){

    //creating object of CountDigit
 class
    CountDigit perform = CountDigit();
    int num;

    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y'){

        //getting values from user
        cout << endl << "Enter number : ";
        cin >> num;

        //assign values
        perform.setter(num);

        //dislay result for given values
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

        system("cls");

    }

}
