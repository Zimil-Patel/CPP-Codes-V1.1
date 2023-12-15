#include<iostream>
using namespace std;

class Vehicle{

	public:
		virtual void startEngine() = 0;
		virtual void drive() = 0;

};


class Car : public Vehicle{

	public:
		void startEngine(){
		
			cout << endl << "> - - - Car - - - <" << endl;
			cout << "Car engine started!";
		
		}
		void drive(){
		
			cout << endl << "Drive Car" << endl << endl;
		
		};

};


class Bike : public Vehicle{

	public:
		void startEngine(){
		
			cout << endl << "> - - - Bike - - - <" << endl;
			cout << "Bike engine started!";
		
		}
		void drive(){
		
			cout << endl << "Drive Bike" << endl << endl;
		
		};

};


int main(){

	Vehicle *v[2];
	Car car;
	Bike bike;
	
	v[0] = &car;
	v[1] = &bike;
	
	v[0]->startEngine();
	v[0]->drive();
	
	v[1]->startEngine();
	v[1]->drive();

	return 0;
};