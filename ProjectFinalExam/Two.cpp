#include<iostream>
#include<string>
using namespace std;

class BankAccount{

	private:
		int actNumber;
		int balance = 10000;
		string ownerName;
		
	public:
		void setValues(){
		
			cout << endl << "> - - - Enter Act details - - - <";
			
			cout << endl << "Enter Account holder name : ";
			getline(cin >> ws, ownerName);
			
			cout << "Enter account number: ";
			cin >> actNumber;
			
		
		}
		
		void display(){
		
			cout << endl << "Act Number : " << actNumber
				 << endl << "Name : " << ownerName
				 << endl << "Balance : " << balance
				 << endl << endl; 
		
		}
		
		void creditAmt(){
		
			int creditAmt;
			cout << endl << "Enter amount to credit : ";
			cin >> creditAmt;
			
			cout << "> - - - Before credit - - - <<";
			display();
			
			balance = balance + creditAmt;
			
			cout << "> - - - After credit - - - <<";
			display();
		
		}
		
		void debitAmt(){
		
			int debitAmt;
			cout << endl << "Enter amount to debit : ";
			cin >> debitAmt;
			
			cout << "> - - - Before debit - - - <<";
			display();
			
			balance = balance - debitAmt;
			
			cout << "> - - - After debit - - - <<";
			display();
		
		}

};


int main(){

	BankAccount act;
	
	act.setValues();
	
	act.display();
	
	act.creditAmt();
	
	act.debitAmt();
	
	return 0;

}