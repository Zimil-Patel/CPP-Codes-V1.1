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

//all student attributes and methods are stored here
class StudentData{

    private:
    int stu_id, stu_age;
    string stu_name, stu_course, stu_city, stu_email, stu_college;

    public:
    void setter(int count){

        cout << endl << "Student " << count;
        //id
        cout << endl << "id : ";
        cin >> stu_id;
        //name
        cout << "name : ";
        getline(cin >> ws, stu_name);
        //age
        cout << "age : ";
        cin >> stu_age;
    }
};


int main(){


    return 0;
}