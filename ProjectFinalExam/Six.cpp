#include<iostream>
using namespace std;


class Distance{

    public:
    	
    	int distance = 0;

        Distance operator+(Distance dis){
	
			Distance temp;
            temp.distance = dis.distance + this->distance;
            
            return temp;

        }

};

main(){

    Distance obj1, obj2, obj3;

    int dis;
    
    cout << endl << "Enter distance for obj1 : ";
    cin >> obj1.distance;


    cout << "Enter distance for obj2 : ";
    cin >> obj2.distance;
    
    //adding two distance from two differnt object
    obj3 = obj1 + obj2;
    
    cout << endl << "Addition of two object distance is : "
		 << obj3.distance << endl << endl;

  	return 0;

}