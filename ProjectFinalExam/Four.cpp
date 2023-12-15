#include<iostream>
using namespace std;

class Shape{

	private:
		string color;
		float area;
		
	public:
		void setColor(string color){
		
			this->color = color;
		
		}
		
		string getColor(){
			
			return color;
		
		}
		
		void setArea(float area){
		
			this->area = area;
			
		}
		
		float getArea(){
			return area;
		}
		
		virtual void Calculate() = 0;
		
		virtual void displayDetails() = 0;
		

};

class Circle : public Shape{

	private:
		float radius;
		string color;
		float a;

	public:
		void getCircleData(){
		
			cout << endl << "Enter color : ";
			getline(cin >> ws, color);
			setColor(color);
			cout << "Enter radisu : ";
			cin >> radius;
			
		
		}
		
		void Calculate(){
		
			
			a = 3.14 * radius * radius;
			setArea(a);
		
		}
		
		void displayDetails(){
		
			cout << endl << "> - - - Details - - - <"
				 << endl;
			cout << endl << "Area : " << getArea()
				 << endl << "Color : " << getColor()
				 << endl << endl; 
		
		}
		
		Circle(){
		
			cout << endl << "> - - -Circle- - - <";
		
		}
		

};

class Rectangle : public Shape{

	private:
		float length, width, a;
		string color;

	public:
		void getRectangleData(){
		
			cout << endl << "Enter color : ";
			getline(cin >> ws, color);
			setColor(color);
			cout << "Enter length : ";
			cin >> length;
			cout << "Enter width : ";
			cin >> width;
			
		
		}
		
		void displayDetails(){
		
			cout << endl << "> - - - Details - - - <"
				 << endl;
			cout << endl << "Area : " << getArea()
				 << endl << "Color : " << getColor()
				 << endl << endl; 
		
		}
		
		void Calculate(){
		
			a = length * width;
			setArea(a);
		
		}
		
		Rectangle(){
		
			cout << endl << "> - - -Rectangle- - - <";
		
		}

};

int main(){

	Shape *shape[2];

	Circle circle;
	
	shape[0] = &circle;
	
	circle.getCircleData();
	circle.Calculate();
	
	shape[0]->displayDetails();
	
	Rectangle rect;
	
	shape[1] = &rect;
	
	rect.getRectangleData();
	rect.Calculate();
	
	
	shape[1]->displayDetails();
	return 0;
}