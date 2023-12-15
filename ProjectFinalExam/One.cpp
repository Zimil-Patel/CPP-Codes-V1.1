#include<iostream>
using namespace std;

class Laptop{

	private:
		int price;
		string name, processor;
		
	public:
		Laptop(){
		
			cout << endl << "> - - - Welcome - - - <" <<
					endl;
					
		}
		
		
		Laptop(string name, int price, string processor){
		
			this->name = name;
			this->processor = processor;
			this->price = price;
		
		}
		
		
		void display(){
		
			cout << endl << "> - - - Given Details - - - <" << endl;
			cout << "Name : " << name;
			cout << endl << "Processor : " << processor;
			cout << endl << "Price : " << price << endl << endl;
		
		}
		
		~Laptop(){
		
			cout << endl << "> - - - Thank you for visiting - - - <" << endl << endl;
		
		}


};


int main(){

	string name, processor;
	int price;
	
	cout << endl << "> - - - Enter laptop Details - - - <" <<
			endl;
			
	cout << "Name : ";
	getline(cin >> ws, name);
	
	cout << "Processor : ";
	getline(cin >> ws, processor);
	
	cout << "Price : ";
	cin >> price;
	
	Laptop lap = Laptop(name, price, processor);
	
	lap.display();

	return 0;
}