/*
Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance. (as same the attached image)
*/

#include<iostream>
using namespace std;


class A{

    protected:
        int id, salary, experience;
        string name, role, comp_name, address, email;
        long long contact;

        void setValuesOfA(){

            cout << endl << ">>    Employee id : ";
            cin >> id;
            cout << ">>    Employee name : ";
            getline(cin >> ws, name);
            cout << ">>    Employee role : ";
            getline(cin >> ws, role);

        }

};

class B : public A{

    protected:
        void setValuesOfB(){

                setValuesOfA();
                cout << ">>    Employee salary : ";
                cin >> salary;
                cout << ">>    Employee experience : ";
                cin >> experience;

        }

};

class C : public B{

    protected:
        void setValuesOfC(){

                setValuesOfB();
                cout << ">>    Employee company name : ";
                getline(cin >> ws, comp_name);
                cout << ">>    Employee address : ";
                getline(cin >> ws, address);

        }

        void getValuesOfC(){

            cout << endl << "Name : " << name <<
                    endl << "Role : " << role <<
                    endl << "Salary : " << salary;

        }


};

class D : public C{

    public:
        void setValue(){

            setValuesOfC();
            cout << ">>    Employee email : ";
            getline(cin >> ws, email);
            cout << ">>    Employee contact : ";
            cin >> contact;

        }

        void getValues(){

            cout << endl << ">> Employee Details <<" << 
                    endl << "Id : " << id;
            getValuesOfC();
            cout << endl << "Experience : " << experience <<
                    endl << "Company name : " << comp_name <<
                    endl << "Address : " << address << 
                    endl << "Email : " << email <<
                    endl << "Contact : " << contact <<
                    endl;

        }

};

int main(){

    D emp;
    emp.setValue();
    emp.getValues();

    return 0;
}