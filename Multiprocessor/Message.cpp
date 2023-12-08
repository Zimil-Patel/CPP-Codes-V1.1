/*
Q.1 Write a Program to create a Message class with a constructor that takes a single string with a default value. Create a private member of the typed string, 
and in the constructor simply assign the argument string to your internal string. Create two overloaded member functions called print( ): 
one that takes no arguments and simply prints the message stored in the variable and one that takes a string argument, which it prints in addition to the internal message.
*/
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
