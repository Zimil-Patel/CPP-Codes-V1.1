/*
Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_email
- stu_college
*/

#include<iostream>
#include<string.h>
using namespace std;

void showTitle(){

        cout << endl
         << "# # # # # # # # # # # # # # # # # # # # # #" << endl
         << "#                                         #" << endl
         << "#        STUDENT MANAGMENT SYSTEM         #" << endl
         << "#                                         #" << endl
         << "# # # # # # # # # # # # # # # # # # # # # #" << endl;

    }

//all student attributes and methods are stored here
class StudentData{

    private:
    int stu_id, stu_age;
    string stu_name, stu_course, stu_city, stu_email, stu_college;

    public:
    void setter(int count){

        cout << endl << ">>   Student " << count;
        //id
        cout << endl << "     id : ";
        cin >> stu_id;
        //name
        cout << "     name : ";
        getline(cin >> ws, stu_name);
        //age
        cout << "     age : ";
        cin >> stu_age;
        //course
        cout << "     course : ";
        getline(cin >> ws, stu_course);
        //city
        cout << "     city : ";
        getline(cin >> ws, stu_city);
        //email
        cout << "     email : ";
        getline(cin >> ws, stu_email);
        //college
        cout << "     college : ";
        getline(cin >> ws, stu_college);

    }

    void display(int count){

        cout << endl << ">>Student " << count;
        //id
        cout << endl << "  id : " << stu_id;
        //name
        cout << "  name : " << stu_name;
        //age
        cout << "  age : " << stu_age;
        //course
        cout << "  course : " << stu_course;
        //city
        cout << "  city : " << stu_city;
        //email
        cout << "  email : " << stu_email;
        //college
        cout << "  college : " << stu_college;

    }

};


int main(){

    StudentData stu[5];

    showTitle();

    cout << endl << ">> Enter Student Details <<"; 

    for (int i = 0; i < 5; i++){

        stu[i].setter(i + 1);

    }

    cout << endl << ">> Students Data <<";

    for (int i = 0; i < 5; i++){

        stu[i].display(i + 1);

    }

    return 0;
}