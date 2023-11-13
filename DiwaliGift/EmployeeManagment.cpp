/* Employee Management system - (sujit-kuldeep),(jaydeep-zimil)
register //done
salary  //done
tax     //done
bonus
role -- Intern - 8000, //done
        Junior staffer - 15000, 
        senior staffer 100000, 
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
    int salary = 0;
    string role;
    int empBonus = 0;

};


//additional functions included in this class
class ExtraFunctions{

    public:

    int internSal = 8000;
    int juniorSal = 15000;
    int seniorSal = 30000;
    int teamLeaderSal = 45000;
    int deparmentHeadSal = 50000;
    int cooSal = 70000;

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
            salary = internSal - ((internSal * tax) / 100) + bonus;
        else if (role == "JUNIOR STAFFER")
            salary = juniorSal - ((juniorSal * tax) / 100) + bonus;
        else if (role == "SENIOR STAFFER")
            salary = seniorSal - ((seniorSal * tax) / 100) + bonus;
        else if (role == "TEAM LEADER")
            salary = teamLeaderSal - ((teamLeaderSal * tax) / 100) + bonus;
        else if (role == "DEPARTMENT HEAD")
            salary = deparmentHeadSal - ((deparmentHeadSal * tax) / 100) + bonus;
        else if (role == "COO")
            salary = cooSal - ((cooSal * tax) / 100) + bonus;

        return salary;
        
    }  


};


//this class include all operations related to employee dash
class EmpDashFunctions{

    public:

    EmployeeData empData[10];

    ExtraFunctions perform;

    int choice = 0, i, j;

    float tax = 0.0;

    int bonus = 0;
    
    int isExist = 0;


    //Displaying dashboard and asking choice
    int showDash(){

        cout << endl << "#-#-#-#---- Dash-Board ----#-#-#-#" <<
                endl << "#                                #" << 
                endl << "#   1. Register new employee     #" << 
                endl << "#   2. View all employees        #" <<
                endl << "#   3. Set Tax to salary         #" <<
                endl << "#   4. Set bonus to salary       #" <<
                endl << "#   5. Fire employee             #" <<
                endl << "#   6. Exit                      #" <<
                endl << "#                                #" << 
                endl << "# # # # # # # # # # # # ## # # # #"<<
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

                empData[i].id = getUniqueId();

                cout << "Employee name : ";
                getline(cin >> ws, empData[i].name);

                cout << "Employee role : ";
                getline(cin >> ws, empData[i].role);

                //coverting role string into uppercase
                empData[i].role = perform.stringToUpper(empData[i].role); 

                //fetching employee salary according their role
                empData[i].salary = perform.getEmpSalary(empData[i].role, tax, empData[i].empBonus);

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


    //verify that user enetered unique employee id
    int getUniqueId(){

        int isUnique = 1;
        int id = 0;

        cout << endl << "Employee id : ";
        cin >> id;

        //check given id is valid or not
        for (i = 0; i < 10; i++){
        
            if (i == 0 && empData[i].id == 0){

                isUnique = 1;
                break;

            } else if (empData[i].id != 0 && id == empData[i].id){

                isUnique = 0;
                break;

            }

            if (isUnique)
                return id;
            else{
                cout << endl << "Invalid! Enter unique id" << endl;
                getUniqueId();
            }       
             
        }

    }

    //View all employee method
    int viewAllEmp(){

        isExist = 0;

        for (i = 0; i < 10; i++){

            //Chekcing is there exists an employee
            if (empData[i].id == 0){

                if (i > 0)
                    break;
                isExist = 0;
                cout << endl << "##################################" << endl;
                cout << endl << "   There is no employee data!" << endl;
                break;

            } else {

                if (i == 0)
                    cout << endl << "###### All employee Details ######" << endl;

                isExist = 1;
                cout << endl << "---------------------------------" <<
                        endl << "  >>> Employee " << i + 1 <<
                        endl << "      id : " << empData[i].id <<
                        endl << "      name : " << empData[i].name <<
                        endl << "      role : " << empData[i].role <<
                        endl << "      salary : " << empData[i].salary << " Rs.";

    

            }

        }

        if (isExist)
            cout << endl << "---------------------------------" << endl;
        cout << endl << "#################################" << endl << endl;

        return isExist;

    }


    //function to make changes in tax
    void setTaxToSalary(){

        cout << endl << "How much tax you want to apply? : ";
        cin >> tax;

        updateSalary(tax);

        cout << endl << "---- Tax changed successfully ----" << endl << endl;

    }


    //function to make chnages in bonus
    void setBonusToSalary(){

        int bonusOption = 0;

        cout << endl << "How would you like to apply bonus ?" << endl <<
                endl << "1. Paricular employee salary" <<
                endl << "2. Particular employee role" <<
                endl << "3. All employee salary" <<
                endl <<
                endl << "Enter your choice : ";

        cin >> bonusOption;

        switch(bonusOption){

            case 1:
                viewEmpAddBonus();
                break;
            
            case 2:
                viewRoleAddBonus();
                break;

            case 3:
                addBonusToAllEmp();
                break;

        }

    }


    //fire an employee
    void fireEmp(){

        isExist = viewAllEmp();
        int selEmpId;

        int foundSatus = 0;
        int atLoc = 0;
        int lastLoc = 10 - 1;

        if (isExist){

            cout << endl << "Enter employee's id whom you want to fire : ";
            cin >> selEmpId;


            for (i = 0; i < 10; i++){

                if (empData[i].id == 0){
                    lastLoc = i;
                    break;
                } else {

                    if (empData[i].id == selEmpId){

                        foundSatus = 1;
                        atLoc = i;
                        break;

                    }

                }

            }

            if (foundSatus){
                swap(atLoc, lastLoc);
            } else 
                cout << endl << "There is no employee with id " << selEmpId << "!" << 
                endl << endl;

        }

    }


    //View all employee and check is there any employee data exists then add bonus amount
    void viewEmpAddBonus(){

        isExist = viewAllEmp();
        int selEmpId = 0, bonusAmt = 0;

        if (isExist){

            cout << endl << "Enter employee's id to whom you want to give bonus : ";
            cin >> selEmpId;

            cout << endl << "Enter Bonus amount : ";
            cin >> bonusAmt;

            for (i = 0; i < 10; i++){

                //Chekcing is there exists an employee
                if (empData[i].id == 0)
                    break;
                else{

                    if(empData[i].id == selEmpId){
                        empData[i].empBonus = bonusAmt;
                        empData[i].salary = perform.getEmpSalary(empData[i].role, tax, empData[i].empBonus);
                    }
                }

            }

            cout << endl << "---- Bonus added successfully ----" << endl << endl;

        }

    }


     //View employee role and get bonus amount
    void viewRoleAddBonus(){

        int roleOption;
        int bonusAmt= 0;
        isExist = checkForEmp();

        if(isExist){

            cout << endl << "1. INTERN" <<
                    endl << "2. JUNIOR STAFFER" <<
                    endl << "3. SENIOR STAFFER" <<
                    endl << "4. TEAM LEADER" <<
                    endl << "5. DEPARTMENT HEAD" <<
                    endl << "6. COO";

            cout << endl << endl<< "Which employee role you want to apply bonus : ";
            cin >> roleOption;

            cout << endl << "Enter Bonus amount : ";
            cin >> bonusAmt;

            switch(roleOption){

                case 1:
                    addBonusToSalary("INTERN", bonusAmt);
                    break;

                case 2:
                    addBonusToSalary("JUNIR STAFFER", bonusAmt);
                    break;

                case 3:
                    addBonusToSalary("SENIOR STAFFER", bonusAmt);
                    break;

                case 4:
                    addBonusToSalary("TEAM LEADER", bonusAmt);
                    break;

                case 5:
                    addBonusToSalary("DEPARTMENT HEAD", bonusAmt);
                    break;

                case 6:
                    addBonusToSalary("COO", bonusAmt);
                    break;
            }

            cout << endl << "---- Bonus added successfully ----" << endl << endl;

        } else {

            isExist = viewAllEmp();

        }   

    }


    //Add bonus to all employee
    void addBonusToAllEmp(){

        isExist = checkForEmp();

        if(isExist){

            cout << endl << "Enter Bonus amount : ";
            cin >> bonus;

            for (i = 0; i < 10; i++){

                //check if there exist an employee or not
                if (empData[i].id == 0)
                    break;
                else{
                    empData[i].empBonus = bonus;
                    empData[i].salary = perform.getEmpSalary(empData[i].role, tax, empData[i].empBonus);
                }
            }

            cout << endl << "---- Bonus added successfully ----" << endl << endl;

        } else {

            isExist = viewAllEmp();

        }

    }


    //update employee salary after changes in tax or bonus
    void updateSalary(float tax){

        for (i = 0; i < 10; i++){

            //Chekcing is there exists an employee
            if (empData[i].id == 0)
                break;
            else
                empData[i].salary = perform.getEmpSalary(empData[i].role, tax, empData[i].empBonus);

        }
    
    }


    //Add bonus to particular employee role
    void addBonusToSalary(string role, int bonus){

        for (i = 0; i < 10; i++){

            //Chekcing is there exists an employee
            if (empData[i].id == 0)
                break;
            else{
                if (empData[i].role == role){
                    empData[i].empBonus = bonus;
                    empData[i].salary = perform.getEmpSalary(role, tax, empData[i].empBonus);
                }
            }
        }

    }


    //check is there an employee exist
    int checkForEmp(){

        isExist = 0;

        for (i = 0; i < 10; i++){

            if (empData[i].id == 0){
                isExist = 0;
                break;
            } else {
                isExist = 1;
                break;
            }
        }

        return isExist;
    }


    //swap employee data in array
    void swap(int atLoc, int lastLoc){

        j = 0;

        for (i = atLoc; i <= lastLoc; i++){

            j = i + 1;

            if (j < 10){

                empData[i].id = empData[j].id;
                empData[i].name = empData[j].name;
                empData[i].role = empData[j].role;
                empData[i].empBonus = empData[j].empBonus;

            } else {

                empData[i].id = 0;
                empData[i].name = "";
                empData[i].role = "";
                empData[i].empBonus = 0;

            }
        }

        cout << endl << "-------- Employee deleted --------" << endl << endl;

    }
};


//main method
int main(){

    EmpDashFunctions empDashFun = EmpDashFunctions();
    int isExist = 0;
    //displaying employee managment dashboard
    empDashFun.showDash();

    while (empDashFun.choice != 6){

        switch (empDashFun.choice){

            case 1:
                empDashFun.regNewEmp();
                empDashFun.showDash();
                break;

            case 2:
                isExist = empDashFun.viewAllEmp();
                empDashFun.showDash();
                break;

            case 3:
                empDashFun.setTaxToSalary();
                empDashFun.showDash();
                break;

            case 4:
                empDashFun.setBonusToSalary();
                empDashFun.showDash();
                break;

            case 5:
                empDashFun.fireEmp();
                empDashFun.showDash();
                break;

            case 6:
                empDashFun.choice = 6;
                break;

            default:
                cout << endl << "Invalid, Enter valid option!";
                empDashFun.choice = 0;
                empDashFun.showDash(); 

        }

    }

    return 0;
}
