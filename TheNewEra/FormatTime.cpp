/*
Q.2 Write a Program to read time in seconds and convert it into time in (HH:MM:SS) format.
For example,
Input:
Enter seconds: 4520

Output:
1:15:20
*/

#include<iostream>
using namespace std;

//class for formatting time output
class TimeFormat{


    public:
    int sec, min, hrs;

    //getting value from user
    void getValues(){

        cout << endl << "Enter seconds : ";
        cin >> sec;

    }

    //format second into HH:MM:SS
    void formatSec(){

        hrs = sec / 3600;
        min = (sec - (hrs * 3600)) / 60;
        sec = sec - (hrs * 3600) - (min * 60);

    }

    //displaying result
    void display(){

        cout << "Formatted Time : " << hrs << ":" << min << ":" << sec << endl << endl; 

    }

};


//main method
int main(){

    TimeFormat perform = TimeFormat();

    char repeat = 'y';

    while (repeat == 'y'){

        //getting user value
        perform.getValues();

        //format second
        perform.formatSec();

        //displaying result
        perform.display();

        //Asking user to perform again
        cout << "Do you want to perform again ? (y/n) : ";
        cin >> repeat;

    }

    return 0;
}