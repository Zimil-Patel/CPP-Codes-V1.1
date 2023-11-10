/* Employee Management system - (sujit-kuldeep),(jaydeep-zimil)
register
salary
tax
bonus
role -- Intern - 8000, 
        Junior staffer - 15000, 
        senior staffer 30000, 
        Team Leader - 45000, 
        Deparment head - 50000, 
        COO(cheif oeprating officer) - 70000
fired
*/

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


//additional functions included in this class
class ExtraFunctions{

    public:

    //function for converting string to upper
    string stringToUpper(string oString){

        for(int i = 0; i < oString.length(); i++){
            oString[i] = toupper(oString[i]);
        }
        return oString;
    }


    //function to decide employee salary according thier role
    int getEmpSalary(string role, float tax, int bonus){

        int salary = 0;

        if (role == "INTERN")
            salary = 8000 - ((8000 * tax) / 100) + bonus;
        else if (role == "JUNIOR STAFFER")
            salary = 15000 - ((15000 * tax) / 100) + bonus;
        else if (role == "SENIOR STAFFER")
            salary = 30000 - ((30000 * tax) / 100) + bonus;
        else if (role == "TEAM LEADER")
            salary = 45000 - ((45000 * tax) / 100) + bonus;
        else if (role == "DEPARTMENT HEAD")
            salary = 50000 - ((50000 * tax) / 100) + bonus;
        else if (role == "COO")
            salary = 70000 - ((70000 * tax) / 100) + bonus;

        return salary;
        
    }  

};


//this class include all operations related to employee dash
class EmpDashFunctions{

    public:

    EmployeeData empData[10];

    ExtraFunctions perform;

    int choice = 0, i;

    float tax = 0.0;

    int bonus = 0;


    //Displaying dashboard and asking choice
    int showDash(){

        cout << endl << "----------- DashBoard -----------  " <<
                endl << "| 1. Register new employee      |" << 
                endl << "| 2. View all employees         |" <<
                endl << "| 3. Set Tax to salary          |" <<
                endl << "| 4. Exit                       |" <<
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
                getline(cin >> ws, empData[i].name);

                cout << "Employee role : ";
                getline(cin >> ws, empData[i].role);

                //coverting role string into uppercase
                empData[i].role = perform.stringToUpper(empData[i].role); 

                //fetching employee salary according their role
                empData[i].salary = perform.getEmpSalary(empData[i].role, tax, bonus);

                cout << endl << "--- Employee added successfully ---" << endl << endl;

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
                        endl << "salary : " << empData[i].salary << " Rs.";

            }

        }

        cout << endl << "---------------------------------" << endl << endl;


    }


    //function to make changes in tax
    void setTaxToSalary(){

        cout << endl << "How much tax you want tp apply? : ";
        cin >> tax;

        updateSalary(tax, bonus);

        cout << "---- Tax changed successfully ----" << endl << endl;

    }


    //update employee salary after changes in tax or bonus
    void updateSalary(float tax, int bonus){

        for (i = 0; i < 10; i++){

            //Chekcing is there exists an employee
            if (empData[i].id == 0)
                break;
            else
                empData[i].salary = perform.getEmpSalary(empData[i].role, tax, bonus);

        }
    
    }

};


//main method
int main(){

    EmpDashFunctions empDashFun = EmpDashFunctions();

    //displaying employee managment dashboard
    empDashFun.showDash();

    while (empDashFun.choice != 4){

        switch (empDashFun.choice){

            case 1:
                empDashFun.regNewEmp();
                empDashFun.showDash();
                break;

            case 2:
                empDashFun.viewAllEmp();
                empDashFun.showDash();
                break;

            case 3:
                empDashFun.setTaxToSalary();
                empDashFun.showDash();
                break;

        }

    }

    return 0;
}
