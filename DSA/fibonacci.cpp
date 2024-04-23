#include <iostream>
using namespace std;


void printDivision(double dividend, double divisor) {
   
    double result = dividend / divisor;
    cout << dividend << " / " << divisor << " : " << result << endl;
  
}

int main() {
    double num1, num2;

    // Input two numbers from the user
    cout << "Enter the dividend: ";
    cin >> num1;
    cout << "Enter the divisor: ";
    cin >> num2;

    // Call the function to print the division result
    printDivision(num1, num2);

    return 0;
}
