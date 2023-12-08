#include<iostream>
using namespace std;

class Message{
	
	string message;
	
	public:
		Message(string message){
			
			this->message = message;
			
		}
		
		void print(){
			
			cout << endl << "printf() with no parameter : " << message 
				 << endl;
			
		}
		
		void print(string newMessage){
			
			cout << endl << "printf() with parameter : " << message << " " << newMessage
				 << endl << endl;
			
		}
	
};


int main(){
	
	Message msg("Hello");
	msg.print();
	msg.print("StaR_BoY");
	
	return 0;
}