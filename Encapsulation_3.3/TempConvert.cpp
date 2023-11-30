// /*
// Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature 
// into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
// - Class P has the following members: temperature attribute in double
// - Class Q has the following members: toFehrenheit() method
// - Class R has the following members: toKelvin() method.
// */
// #include<iostream>
// #include<iomanip>
// #include<ios>
// using namespace std;

// class P{

//     public:
//         double celsius;

//         void getCelsius(){

//             cout << endl << "Enter Celsius : ";
//             cin >> celsius;

//         }

// };

// class Q : public P{

//     public:
//         double fahrenheit;

//         void toFahrenheit(){
//             fahrenheit = (celsius * 9 / 5) + 32;
//         }

// };

// class R : public Q{

//     private:
//         double kelvin;

//     public:
//         void toKelvin(){
//             kelvin = ((fahrenheit - 32) / 1.8) + 273.15;
//         }

//         void display(){

//             cout << endl << "Celsisu : " << setprecision(3);
//             cout << celsius;
//             cout << endl << "Fahrenheit : " << setprecision(5);
//             cout << fahrenheit;
//             cout << endl << "Kelvin : " << setprecision(3);
//             cout << kelvin <<
//                     endl << endl;
//         }


// };

// int main(){

//     R perform;

//     //get celsisus to fahrenheit
//     perform.getCelsius();
//     //convert and store celsius into fahrenheit
//     perform.toFahrenheit();
//     //convert and store fahrenheit into kelvin
//     perform.toKelvin();
//     //display result
//     perform.display();

//     return 0;
// }


#include <iomanip>
#include <ios>
#include <iostream>
 
using namespace std;
 
int main()
{
 
    // Initializing the decimal
    double num = 3.142857142857;
 
    cout << "Before setting the precision: \n"
         << num << endl;
 
    // Using setprecision()
    cout << "Setting the precision using"
         << " setprecision to 5: \n"
         << setprecision(5);
 
    cout << num << endl;
 
    // Using setprecision()
    cout << "Setting the precision using"
           << " setprecision to 9 : \n "
         << setprecision(9);
 
    cout << num << endl;
 
    return 0;
}