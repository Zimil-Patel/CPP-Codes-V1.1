#include<iostream>
using namespace std;

class Arithmetics{
	
	protected:
		double num1, num2, num3, num4, num5;
		
	
};

class Operations : public Arithmetics{

	public:
		//division with 2 parameter
		void calculate(double num1, double num2){
			this->num1 = num1;
			this->num2 = num2;
			cout << endl << "Division : " << num1 / num2;
		}
		
		//subtraction with threee parameter
		void calculate(double num1, double num2, double num3){
			this->num1 = num1;
			this->num2 = num2;
			this->num3 = num3;
			cout << endl << "Subtraction : " << num1 - num2- num3;
		}
		
		//multiplication with four parameter
		void calculate(double num1, double num2, double num3, double num4){
			this->num1 = num1;
			this->num2 = num2;
			this->num3 = num3;
			this->num4 = num4;
			cout << endl << "Multiplication : " << num1 * num2 * num3 * num4;
		}
		
		//addition with five parameter
		void calculate(double num1, double num2, double num3, double num4, double num5){
			this->num1 = num1;
			this->num2 = num2;
			this->num3 = num3;
			this->num4 = num4;
			this->num5 = num5;
			cout << endl << "Addition : " << num1 + num2 + num3 + num4 + num5;
		}

};

int main(){
	
	Operations perform;
	
	double num[5];
	int choice;
	
	
	for (int i = 0; i < 5; i++){
	
		cout << "Enter number " << i +  1 << " : ";
		cin >> num[i];
	
	}
	
	perform.calculate(num[0], num[1]);
	perform.calculate(num[0], num[1], num[2]);
	perform.calculate(num[0], num[1], num[2], num[3]);
	perform.calculate(num[0], num[1], num[2], num[3], num[4]);
		

	return 0;
}
