/*
Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
For example,
Input:
Enter the first number: 2020

Enter the second number: 2040

Output:
The array is: 2020, 2024, 2028, 2032, 2036, 2040
*/

#include<iostream>
using namespace std;

int main(){

    int num1, num2;

    cout << "Enter the first number : ";
    cin >> num1;

    cout << "Enter the second number : ";
    cin >> num2;

    if (num1 > num2){

        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;

    }

    int sizeOfArray = num2 - num1;

    if (sizeOfArray % 4 == 0)
         sizeOfArray = (sizeOfArray / 4) + 1;
    else
        sizeOfArray = sizeOfArray / 4;


    int arrayOfLeapYear[sizeOfArray];
    short i, j = 0;

    for (i = num1; i <= num2; i++){

        if (i % 4 == 0){

            arrayOfLeapYear[j] = i;
            j++;

        }

    }

    //priting arrayOfLeapYear
    cout << "\nThe array is : ";

    for (i = 0; i < sizeOfArray; i++)
        cout << arrayOfLeapYear[i] << " ";

    return 0;

}