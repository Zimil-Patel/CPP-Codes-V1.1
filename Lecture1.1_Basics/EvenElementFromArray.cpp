/*
Q.1 Write a Program to find all even elements from a given 1D array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 12
a[1] = 42
a[2] = 15
a[3] = 55
a[4] = 26

Output:
Even elements of an Array: 12, 42, 26
*/

#include<iostream>
using namespace std;

int main(){

    int arraySize;

    cout << "Enter array size : ";
    cin >> arraySize;

    int arr[arraySize];

    cout << ": Enter array elements :\n" ;

    for (short i = 0; i < arraySize; i++){

        cout << "arr["<<i<<"] : ";
        cin >> arr[i];

    }

    //Printing even elements
    cout << "\nEven elements of an Array: ";

    for (short i = 0; i < arraySize; i++)
        cout << arr[i] << " ";

    return 0;

}