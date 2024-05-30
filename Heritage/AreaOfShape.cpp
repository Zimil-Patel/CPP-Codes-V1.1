/*
Q.1 Write a Program that defines a shape class with a constructor that gives value to width and height.
Then define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
In the main, define two objects a triangle and a rectangle, and then call the area() function using these two objects.
*/
#include<iostream>
using namespace std;

class Shape{

    public:
        double height, width;

        void getValue(){


            cout << endl << "Height : ";
            cin >> height;
            cout << "Width : ";
            cin >> width;

        }

};

//rectangle class 
class Rectangle : public Shape{

    public:

        void area(){

            cout << endl << ">> Rectangle <<";
            getValue();
            cout << endl << "Area of recangle is : " << height * width <<
                    endl << endl;

        }

    
};

//triangle class
class Triangle : public Shape{

    public:

        void area(){

            cout << endl << ">> Triangle <<";
            getValue();
            cout << endl << "Area of triangle is : " << (height * width) / 2 <<
                    endl << endl;

        }

    
};


int main(){

    Rectangle rectangle;
    Triangle triangle;

    rectangle.area();
    triangle.area();

    return 0;
}
