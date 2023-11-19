/*
    We are going to develop employee management system where admin can perform following tasks:
    ->admin login;
    ->add employee;
    ->remove employee;
    ->view all employee;
    ->manage salary;
    ->set tax;
    ->set bonus;
    ->modify employee role;
*/

#include <iostream>
#include <unistd.h>

using namespace std;

// display employee managment title
void showTitle()
{

    cout << endl
         << "# # # # # # # # # # # # # # # # # # # # # #" << endl
         << "#                                         #" << endl
         << "#       EMPLOYEE MANAGMENT SYSTEM         #" << endl
         << "#                                         #" << endl
         << "# # # # # # # # # # # # # # # # # # # # # #" << endl;
}

//function for converting string to upper
string stringToUpper(string oString)
{

    for (int i = 0; i < oString.length(); i++)
    {
        oString[i] = toupper(oString[i]);
    }
    return oString;
}

// all admin realated attribute and function are stored here
class AdminLogin
{

private:
    string adminUserName = "admin";
    string adminPass = "1234";

public:
    int adminLogin();
};

//all employee related attributes are store here...
class EmployeeData{

private:
    int id = 0;
    string name;
    int age = 0;
    int experience = 0;
    string role;
    int salary = 0;
    int bonus = 0;
    string city;

public:
    //assign values to private employee data
    void ValueSetter(int emp_id, string emp_name, int emp_age, int emp_exp, string emp_role, int emp_sal, int emp_bonus, string emp_city){

        id = emp_id;
        name = emp_name;
        age = emp_age;
        experience = emp_exp;
        role = emp_role;
        salary = emp_sal;
        bonus = emp_bonus;
        city = emp_city;

    }

    //get all employee data
    void display(){

        cout << endl << "   ID : " << id <<
                endl << "   NAME : " << name <<
                endl << "   AGE : " << age <<
                endl << "   CITY : " << city <<
                endl << "   ROLE : " << role <<
                endl << "   EXPERIENCE : " << experience << "(YEAR)" <<
                endl << "   SALARY : " << salary << " (+bonus : " << bonus << ")" <<
                endl;

    }

    //get employee private data
    int getId(){return id;}

    string getName(){return name;}

    int getAge(){return age;}

    string getCity(){return city;}

    string getRole(){return role;}

    int getExperience(){return experience;}

    int getSalary(){return salary;}

    int getBonus(){return bonus;}

    //update employee private data
    void setId(int newId){id = newId;}

    void setName(string newName){name = newName;}

    void setAge(int newAge){age = newAge;}

    void setCity(string newCity){city = newCity;}

    void setRole(string newRole){role = newRole;}

    void setExperience(int newExp){experience = newExp;}

    void setSalary(int newSal){salary = newSal;}

    void setBonus(int newBonus){bonus = newBonus;}



};

// all dash attributes and functions are stored here
class DashFunctions
{

private:
    EmployeeData emp[3];
    int isExistEmp;
    int isFull;
    char repeat;
    int id, age, exp, sal, bonus;
    string name, role, city;
    float tax = 0; 
    int uniBonus = 0;
    int internSal = 8000;
    int juniorSal = 15000;
    int seniorSal = 30000;
    int teamLeaderSal = 45000;
    int deparmentHeadSal = 50000;
    int cooSal = 70000;

    //check if there exist and employee in employee list
    void checkIfExist(){

        isExistEmp = 1;

        if (emp[0].getId() == 0)
            isExistEmp = 0;

    }

    //check if employee list is full
    void checkIfFull(){

        isFull = 0;

        if(emp[3- 1].getId() != 0)
            isFull = 1;

    }

    //function to decide employee salary according thier role
    int getEmpSalary(string role, float tax, int bonus){

        int salary = 0;

        if (role == "INTERN")
            salary = (internSal + bonus) - (( (internSal + bonus) * tax) / 100);
        else if (role == "JUNIOR STAFFER")
            salary = (juniorSal + bonus) - (( (juniorSal + bonus) * tax) / 100);
        else if (role == "SENIOR STAFFER")
            salary = (seniorSal + bonus) - (( (seniorSal + bonus) * tax) / 100);
        else if (role == "TEAM LEADER")
            salary = (teamLeaderSal + bonus) - (( (teamLeaderSal + bonus) * tax) / 100);
        else if (role == "DEPARTMENT HEAD")
            salary = (deparmentHeadSal + bonus) - (( (deparmentHeadSal + bonus) * tax) / 100);
        else if (role == "COO")
            salary = (cooSal + bonus) - (( (cooSal + bonus) * tax) / 100);

        return salary;
        
    }

    //update salary of employee
    void updateSalary(float tax){

        checkIfExist();
        
        if (isExistEmp){

            for (int i = 0; i < 3; i++){

                //Chekcing is there exists an employee
                if (emp[i].getId() == 0)
                    break;
                else
                    emp[i].setSalary( getEmpSalary(emp[i].getRole(), tax, emp[i].getBonus()) );

            }

        }
    
    }

    //update salary after adding bonus to particular employee role
    void addBonusToSalary(string role, int bonus){

        for (int i = 0; i < 3; i++){

            //Chekcing is there exists an employee
            if (emp[i].getId() == 0)
                break;
            else{
                if (emp[i].getRole() == role){
                    emp[i].setBonus(bonus);
                    emp[i].setSalary( getEmpSalary(emp[i].getRole(), tax, emp[i].getBonus()) );
                }
            }
        }

    }

    //add bonus to particular employee
    void viewEmpAddBonus(){

        viewEmp();

        int selEmpId = 0, bonusAmt = 0;

        if (isExistEmp){

            cout << endl << ">>      Enter employee's id to whom you want to give bonus : ";
            cin >> selEmpId;

            cout << endl << ">>      Enter Bonus amount : ";
            cin >> bonusAmt;

            for (int i = 0; i < 3; i++){

                //Chekcing is there exists an employee
                if (emp[i].getId() == 0)
                    break;
                else{

                    if(emp[i].getId() == selEmpId){
                        emp[i].setBonus(bonusAmt);
                        emp[i].setSalary( getEmpSalary(emp[i].getRole(), tax, emp[i].getBonus()) );
                    }

                }

            }

            cout << endl << ">> - - -Bonus added successfully- - - <<" <<
                    endl << endl;

        }

    }

    //add bonus to particular employee role
    void viewRoleAddBonus(){

        int roleOption;
        int bonusAmt= 0;
        
        viewEmp();

        if(isExistEmp){

            cout << endl << "1. INTERN" <<
                    endl << "2. JUNIOR STAFFER" <<
                    endl << "3. SENIOR STAFFER" <<
                    endl << "4. TEAM LEADER" <<
                    endl << "5. DEPARTMENT HEAD" <<
                    endl << "6. COO";

            cout << endl << endl<< ">>      Which employee role you want to apply bonus? [1/2/3/4/5/6] : ";
            cin >> roleOption;

            cout << endl << ">>      Enter Bonus amount : ";
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

            cout << endl << ">> - - -Bonus added successfully- - - <<" <<
                    endl << endl;

        } else {

            cout << endl << endl;

        }

    }

    //add bonus to all employee
    void addBonusToAllEmp(){

        viewEmp();

        if(isExistEmp){

            cout << endl << "Enter Bonus amount : ";
            cin >> bonus;

            for (int i = 0; i < 3; i++){

                //check if there exist an employee or not
                if (emp[i].getId() == 0)
                    break;
                else{
                    emp[i].setBonus (bonus);
                    emp[i].setSalary( getEmpSalary(emp[i].getRole(), tax, emp[i].getBonus()) );
                }
            }

            cout << endl << ">> - - -Bonus added successfully- - - <<" <<
                    endl << endl;

        }

    }

    //swap employee data in array
    void swap(int atLoc, int lastLoc){

        int j = 0;

        for (int i = atLoc; i <= lastLoc; i++){

            j = i + 1;

            if (j < 3){

                emp[i].setId(emp[j].getId()); 
                emp[i].setName(emp[j].getName());
                emp[i].setAge(emp[j].getAge());
                emp[i].setCity(emp[j].getCity());
                emp[i].setRole(emp[j].getRole());
                emp[i].setExperience(emp[j].getExperience());
                emp[i].setSalary(emp[j].getSalary());
                emp[i].setBonus(emp[j].getBonus());

            } else {

                emp[i].setId(0);
                emp[i].setName("");
                emp[i].setAge(0);
                emp[i].setCity("");
                emp[i].setRole("");
                emp[i].setExperience(0);
                emp[i].setSalary(0);
                emp[i].setBonus(0);

            }
        }

        cout << endl << ">> - - - - - Employee Deleted - - - - <<" << 
                endl << endl;

    }

public:
    int showDash();
    void registerEmp();
    void viewEmp();
    void setTax();
    void setBonus();
    void fireEmp();

};

// all AdminLogin class's functions defination are defined here...
int AdminLogin :: adminLogin()
{

    showTitle();
    string userName, pass;

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - - - Admin Login - - - - - - - -" << endl
         << "-------------------------------------------" << endl;

    // getting userNane and password from user
    cout << endl << ">>    Enter user name : ";
    getline(cin >> ws, userName);

    cout << ">>    Enter password : ";
    getline(cin >> ws, pass);

    // animated logining screen
    cout << endl
         << endl
         << "             | Loging in |" << endl
         << "             ";

    for (int i = 0; i < 4; i++)
    {

        sleep(1);
        cout << "...";
    }

    cout << endl;

    // if user verified successfully redirect admin to dash board
    if (userName == adminUserName && pass == adminPass)
    {

        cout << endl << ">> - - - - - Login Successful - - - - - <<" << 
                endl << endl;

        system("pause");
        system("cls");
        return 1;
    }
    else
    {

        cout << endl << ">> - - Invalid! username or password- - <<" << 
                endl << endl;

        system("pause");
        system("cls");
        adminLogin();
    }
}

// display different options to user and asking which operation admin want to perform
int DashFunctions :: showDash()
{

    showTitle();

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - - - Dash  Board - - - - - - - -" << endl
         << "-------------------------------------------" << endl;

    int choice;

    cout << endl
         << "#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#" << endl
         << "#                                           #" << endl
         << "#       1. Register new employee            #" << endl
         << "#       2. View all employees               #" << endl
         << "#       3. Set Tax to salary                #" << endl
         << "#       4. Set bonus to salary              #" << endl
         << "#       5. Fire employee                    #" << endl
         << "#       6. Logout & Exit                    #" << endl
         << "#                                           #" << endl
         << "#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#" << endl;

    // getting choice from user
    cout << endl << ">>    Enter your choice [1/2/3/4/5/6] : ";
    cin >> choice;

    system("cls");

    switch(choice){

        //1. Register new employee
        case 1:
            showTitle();
            registerEmp();
            system("pause");
            break;

        //2. View all employees   
        case 2:
            showTitle();
            viewEmp();
            system("pause");
            break;

        //3. Set Tax to salary 
        case 3:
            showTitle();
            setTax();
            system("pause");
            break;

        //4. Set bonus to salary 
        case 4:
            showTitle();
            setBonus();
            system("pause");
            break;

        //5. Fire employee
        case 5:
            showTitle();
            fireEmp();
            system("pause");
            break;

        //6. Logout & Exit
        case 6:
            cout << endl << ">> - - - - - Logout Successful - - - - <<" << 
                    endl << endl;
            system("pause");
            //defining loging status 0 by returing 0
            return 0;
            break;

        //when user enter invalid option
        default:
            cout << endl << ">> - - Invalid! Enter valid choice - - <<" 
                 << endl << endl;
            system("pause");

    }

    return 1;
}

//this function is used to register new employee by geeting employee details from admin
void DashFunctions :: registerEmp(){

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - -Register Employee- - - - - - -" << endl
         << "-------------------------------------------" << endl;

    do{

        checkIfFull();

        if (isFull){

            cout << endl << ">> - - - -Employee list is full- - - - <<" <<
                    endl << endl;

        } else {

            cout << endl << ">>    Enter employee details" << endl;

            cout << endl << ">>    id : ";
            cin >> id;

            cout << ">>    name : ";
            getline(cin >> ws, name);

            cout << ">>    age : ";
            cin >> age;

            cout << ">>    experience (in year) : ";
            cin >> exp;

            cout << ">>    role : ";
            getline(cin >> ws, role);
            role = stringToUpper(role);

            cout << ">>    city : ";
            getline(cin >> ws, city);

            sal = getEmpSalary(role, tax, 0);

            for (int i = 0; i < 3; i++)
            {

                if (emp[i].getId() == 0)
                {
                    emp[i].ValueSetter(id, name, age, exp, role, sal, 0, city);
                    break;
                }

            }

            cout << endl << ">> - - - - Employee Registered - - - - <<" << 
                    endl;
        }

        cout << endl << ">>    Do you want to add another? [y/n]: ";
        cin >> repeat;

    } while(repeat == 'y' || repeat == 'Y');

    cout << endl;

}

//this function display all employee details
void DashFunctions :: viewEmp(){

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - -All Employee Data- - - - - - -" << endl
         << "-------------------------------------------" << endl;

    checkIfExist();

    if (isExistEmp == 1){

        for (int i = 0; i < 3; i++)
            if (emp[i].getId() != 0){
                
                if (emp[i].getId() != 0){

                    cout << endl << ">> Employee " << i + 1;
                    emp[i].display();

                }

            }

    } else {

        cout << endl << ">> - - -There is no employee data- - - <<" <<
                endl << endl;
    }

    cout << endl;

}

//this function used to get tax from user and apply it to employee salary
void DashFunctions :: setTax(){

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - - - - - Tax - - - - - - - - - -" << endl
         << "-------------------------------------------" << endl;

    cout << endl << "How much tax you want to apply? : ";
    cin >> tax;

    updateSalary(tax);

    cout << endl << ">> - - -Tax applied successfully- - - <<" << 
            endl << endl;

}

//function to make chnages in bonus
void DashFunctions :: setBonus()
{

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - - - - -Bonus- - - - - - - - - -" << endl
         << "-------------------------------------------" << endl;

    int bonusOption = 0;

    cout << endl << "How would you like to apply bonus ?" << 
            endl << 
            endl << "1. Paricular employee salary" << 
            endl << "2. Particular employee role" << 
            endl << "3. All employee salary" << 
            endl << endl << ">>      Enter choice [1/2/3] : ";

    cin >> bonusOption;

    switch (bonusOption)
    {

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

//this function is used to remove employee from list
void DashFunctions :: fireEmp(){

    cout << endl
         << "-------------------------------------------" << endl
         << "- - - - - - - -Fire Employee- - - - - - - -" << endl
         << "-------------------------------------------" << endl;

    viewEmp();
    int selEmpId;
    int foundSatus = 0;
    int atLoc = 0;
    int lastLoc = 3 - 1;

    if (isExistEmp)
    {

        cout << endl
             << ">>      Enter employee's id whom you want to fire : ";
        cin >> selEmpId;

        for (int i = 0; i < 3; i++)
        {

            if (emp[i].getId() == 0)
            {
                lastLoc = i;
                break;
            }
            else
            {

                if (emp[i].getId() == selEmpId)
                {

                    foundSatus = 1;
                    atLoc = i;
                    break;
                }
            }
        }

        if (foundSatus)
        {
            swap(atLoc, lastLoc);
        }
        else{
            cout << endl
                 << ">> - - There is no employee with id " << selEmpId << "! - - <<" << endl
                 << endl;
        }
    }
}


// main method
int main()
{

    AdminLogin adminFun;
    DashFunctions dashfun;

    // calling adminLogin();
    int loginStatus = adminFun.adminLogin();

    int confirmExit = 'y';

    while (loginStatus)
    {

        // calling showDash(); getting login status value 
        loginStatus = dashfun.showDash();
        system("cls");

        // //asking admin to exit
        // if (!loginStatus){

        //     cout << endl << ">>    Are you sure you want to exit ? [y/n]: ";
        //     cin.ignore();
        //     cin >> confirmExit;

        //     if (confirmExit == 'y' || confirmExit == 'Y')
        //         break;
        //     else
        //         loginStatus = adminFun.adminLogin();

        // }

    }

    return 0;
}
