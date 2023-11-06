/*
Q.3 Write a program to read and print distance for feet and inches.
For example,
input : 
Enter feet: 6
Enter inches: 20

output: Feet - 7, Inch - 8
*/

#include<iostream>

using namespace std;

int main(){

    int feet, inches;

    cout << "Enter feet : ";
    cin >> feet;

    cout << "Enter inches : ";
    cin >> inches;

    cout << "feet - " << feet + inches / 12 << endl <<
            "Inches - " << inches % 12;

    return 0;
}