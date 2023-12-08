/*
Q.2 Write a Program to add two distances using binary plus (+) operator overloading.

For example,
Input:
input1 => Km: 3, Meter: 1020
input2 => Km: 2, Meter: 2050

Output:
Km: 8, Meter: 70
*/
#include<iostream>
using namespace std;

class Measure{
	
	int km, meter;
	
	public:
		void set(int inputNum){
			
			cout << endl << "input (m" << inputNum << ")";
			
			cout << endl << ">> Kilometer : ";
			cin >> km;
			
			cout << ">> Meter : ";
			cin >> meter;
		}
		
		void get(){
			
			cout << endl << ">> Kilometer : " << km << "  Meter : " << meter 
				 << endl << endl;
			
		}
		
		Measure operator+(Measure m2){
		
			Measure temp;
			
			temp.km = this->km + m2.km;
			temp.meter = this->meter + m2.meter;
			
			temp.km = temp.km + (temp.meter / 1000);
			temp.meter = (temp.meter % 1000); 
		
			return temp;
		}
	
};


int main(){
	
	Measure m1, m2, m3;
	
	m1.set(1);
	m2.set(2);
	
	m3 = m1 + m2;
	m3.get();
	
	return 0;
}
