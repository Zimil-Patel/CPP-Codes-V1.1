// Employee Management system - (sujit-kuldeep),(jaydeep-zimil)
// register
// salary
// gst
// bonus
// role
// fired

#include<iostream>
using namespace std;


//employee class with registration method and attributes
class EmployeeData{

    public:

    int id = 0;
    string name;
    int salary;
    string role;

};

class EmpDashFunctions{

    EmployeeData empData[10];

    public:
    int choice = 0, i;

    //function for converting string to upper
    string stringToUpper(string oString){

        for(int i = 0; i < oString.length(); i++){
            oString[i] = toupper(oString[i]);
        }
        return oString;
    }

    //Displaying dashboard and asking choice
    int showDash(){

        cout << endl << "----------- DashBoard -----------  " <<
                endl << "| 1. Register new employee      |" << 
                endl << "| 2. View all employees         |" <<
                endl << "| 3. Exit                       |" <<
                endl << "--------------------------------- "<<
                endl;

        cout << endl << "Enter your option : ";
        cin >> choice;
            
        return choice;
    }
    
    //Register new employee.
    void regNewEmp(){

        cout << endl << "--- Enter new employee Details ---" << endl;

        for (i = 0; i < 10; i++){

            //Chekcing is there is free space to add new employee
            if (empData[i].id == 0){

                cout << endl << "Employee id : ";
                cin >> empData[i].id;

                cout << "Employee name : ";
                // cin.ignore();
                getline(cin >> ws, empData[i].name);

                cout << "Employee role : ";
                // cin.ignore();
                getline(cin >> ws, empData[i].role);
                empData[i].role = stringToUpper(empData[i].role);

                empData[i].salary = 0;

                cout << endl << "--- Employee added successfully ---" << endl;

                break;

            } else {

                if (i == 9){

                    cout << endl << "Can't add new employee, List full!" << endl;
                    showDash();

                }
                continue;

            }

        }

    }

    //View all employee method
    void viewAllEmp(){

        cout << endl << "------ All employee Details ------" << endl;

        for (i = 0; i < 10; i++){

            //Chekcing is there exists an employee
            if (empData[i].id == 0){

                if (i > 0)
                    break;

                cout << endl << "There no employee data!" << endl;
                break;

            } else {

                cout << endl << "---------------------------------" << 
                        endl <<"Employee " << i + 1 <<
                        endl << "id : " << empData[i].id <<
                        endl << "name : " << empData[i].name <<
                        endl << "role : " << empData[i].role <<
                        endl << "salary : " << empData[i].salary << endl << endl;

            }

        }

    }



};


//main method
int main(){

    EmpDashFunctions empDashFun = EmpDashFunctions();

    //displaying employee managment dashboard
    empDashFun.showDash();

    while (empDashFun.choice != 3){

        switch (empDashFun.choice){

            case 1:
                empDashFun.regNewEmp();
                empDashFun.showDash();
                break;

            case 2:
                empDashFun.viewAllEmp();
                empDashFun.showDash();
                break;

        }

    }

    return 0;
}
