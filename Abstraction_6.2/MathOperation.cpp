/*
Questions:
Q.1 Write a Program to perform some basic mathematical operations using an 
Abstract class such like:
- the area of a circle
- the area of a triangle
- the area of a rectangle
- use one single pure virtual function named calculate() 
to perform all the above operations
*/


#include<iostream>
using namespace std;

class MathAttributes{

    protected:
        float length, width, height, radius, base;
        float area;
        static float pi;

    protected:
        virtual void calculate() = 0;
};

float MathAttributes::pi = 3.14;

class Circle : public MathAttributes{

    public:
        void calculate(){

            cout << endl << "> - - -  Circle - - - <" << endl;
            cout << "Enter radius : ";
            cin >> radius;
            area = pi * (radius * radius);
            cout << "Area of circle : " << area << endl;

        }

};

class Triangle : public MathAttributes{

    public:
        void calculate(){

            cout << endl << "> - - -  Triangle - - - <" << endl;
            cout << "Enter base : ";
            cin >> base;
            cout << "Enter height : ";
            cin >> height;

            area = (base * height) / 2;
            cout << "Area of triangle : " << area << endl;

        }

};

class Rectangle : public MathAttributes{

    public:
        void calculate(){

            cout << endl << "> - - -  Triangle - - - <" << endl;
            cout << "Enter length : ";
            cin >> length;
            cout << "Enter width : ";
            cin >> width;

            area = (length * width);
            cout << "Area of rectangle : " << area << endl;

        }

};

int main(){

    Circle circle;
    circle.calculate();
    Triangle triangle;
    triangle.calculate();
    Rectangle rectangle;
    rectangle.calculate();

    cout << endl;

    return 0;
}
