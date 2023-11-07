/*
Q.3 Write a program to convert second into hh: mm: ss.
*/

#include<iostream>
using namespace std;

int main(){

    int sec, hrs, min;

    cout << "Enter seconds : ";
    cin >> sec;

    //converting second into time format
    hrs = sec / 3600;
    min = (sec - (hrs * 3600)) / 60;
    sec = sec - (hrs * 3600) - (min * 60);

    cout << "Formatted time : " << hrs << ":" << min << ":" << sec;

    return 0;
}