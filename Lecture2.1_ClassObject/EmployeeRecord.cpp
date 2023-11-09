/*
Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_salary
- emp_city
- emp_experience
- emp_company_name
*/

#include<iostream>
using namespace std;

//employee class
class EmployeeData{

    public: //public access

    int empId, empAge, empSalary, empExperience;
    string empName, empRole, empCity, empCompanyName; 

};

//method to get values from user
void getValue(string varName, int *intPtr, string *strPtr){

    cout << "Enter employee " << varName;
    if (intPtr == 0){
        // cin.ignore();
        getline(cin >> ws, *strPtr);
    }
    else
        cin >> *intPtr;

}


int main(){

    EmployeeData arrOfEmp[5];
    int n;

    cout << "\nHow many employee data you want to enter : ";
    cin >> n;

    //Getting employee data from user
    for (short i = 0; i < n; i++){

        cout << "\n\nEnter employee " << i + 1 << " details:" <<
                "\n-----------------------------------------\n";

        getValue("employee ID : ", &arrOfEmp[i].empId, 0);
        getValue("employee NAME : ", 0, &arrOfEmp[i].empName);
        getValue("employee AGE : ", &arrOfEmp[i].empAge, 0);
        getValue("employee ROLE : ", 0, &arrOfEmp[i].empRole);
        getValue("employee SALARY : ", &arrOfEmp[i].empSalary, 0);
        getValue("employee CITY : ", 0, &arrOfEmp[i].empCity);
        getValue("employee EXPERIENCE (IN YEAR) : ", &arrOfEmp[i].empExperience, 0);
        getValue("employee COMPANY NAME : ", 0, &arrOfEmp[i].empCompanyName);

    }

    //printing all employee data
    cout << "\n\nEmployee Data";
    cout << "\n-----------------------------------------";

    for (short i = 0; i < n; i++)
        cout << "\n\nEmployee " << i + 1 << "\nID : " << arrOfEmp[i].empId
            << "\nNAME : " << arrOfEmp[i].empName
            << "\nAGE : " << arrOfEmp[i].empAge
            << "\nROLE : " << arrOfEmp[i].empRole
            << "\nSALARY : " << arrOfEmp[i].empSalary
            << "\nCITY : " << arrOfEmp[i].empCity
            << "\nEXPERIENCE : " << arrOfEmp[i].empExperience << " YEARS"
            << "\nCOMPANY NAME : " << arrOfEmp[i].empCompanyName
            << "\n\n----------------------------";

    return 0;
}