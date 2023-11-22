/*
Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
- cust_id
- cust_name
- cust_age
- cust_city
- cust_mobile_number
- cust_simcard_validity (in years)
- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)
*/

#include<iostream>
#include<string.h>
using namespace std;

void showTitle(){

        cout << endl
         << "# # # # # # # # # # # # # # # # # # # # # #" << endl
         << "#                                         #" << endl
         << "#        CUSTOMER MANAGMENT SYSTEM        #" << endl
         << "#                                         #" << endl
         << "# # # # # # # # # # # # # # # # # # # # # #" << endl;

    }

//all student attributes and methods are stored here
class StudentData{

    private:
    int cust_mobile_number;
    int cust_id, cust_age, cust_sim_validity;
    string cust_name, cust_city, cust_telcom_brand;

    public:
    void setter(int count){

        cout << endl << ">>   Customer " << count;
        //id
        cout << endl << "     id : ";
        cin >> cust_id;
        //name
        cout << "     name : ";
        getline(cin >> ws, cust_name);
        //age
        cout << "     age : ";
        cin >> cust_age;
        //city
        cout << "     city : ";
        getline(cin >> ws, cust_city);
        //mobile number
        cout << "     mobile no. : ";
        cin >> cust_mobile_number;
        //sim validity
        cout << "     sim card validity (year) : ";
        cin >> cust_sim_validity;
        //telecom brand
        cout << "     telecom brand (Airtel, Jio, Vi) : ";
        getline(cin >> ws, cust_telcom_brand);
    

    }

    void display(int count){

        cout << endl << ">>Customer " << count << endl;
        //id
        cout << endl << "     id : " << cust_id;
        //name
        cout << "     name : " << cust_name;
        //age
        cout << "     age : " << cust_age;
        //city
        cout << "     city : " << cust_city;
        //mobile number
        cout << "     mobile no. : " << cust_mobile_number;
        //sim validity
        cout << "     sim card validity (year) : " << cust_sim_validity;
        //telecom brand
        cout << "     telecom brand (Airtel, Jio, Vi) : " << cust_telcom_brand;
    
    }

};


int main(){

    StudentData stu[5];

    showTitle();

    cout << endl << ">> Enter Customer Details <<" << endl; 

    for (int i = 0; i < 2; i++){

        stu[i].setter(i + 1);

    }

    cout << endl << ">> Customer Data <<" << endl;

    for (int i = 0; i < 2; i++){

        stu[i].display(i + 1);

    }

    return 0;
}

