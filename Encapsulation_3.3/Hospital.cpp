//Hospital managment system!
#include<iostream>
using namespace std;

class Hospital{

    private:
        static int appoinmentTime;
        static string date;
        static string doctorName;
        string patientName;
        string disease;
        int age;
        long long mobileNo;

    public:

        //set values
        void setter(string patientName, string disease, int age, long long mobileNo){

            this->patientName = patientName;
            this->disease = disease;
            this->age = age;
            this->mobileNo = mobileNo;
        }

        //display all records
        void getter(int count){

            cout << endl
                 << ">>    Date : " << date << endl
                 << "      Time : " << appoinmentTime + count << ":00 PM" << endl
                 << "      Dotor : " << doctorName << endl
                 << "      Patient Name : " << patientName << endl
                 << "      Disease : " << disease << endl
                 << "      age : " << age << endl
                 << "      mobile No. : " << mobileNo << endl;

        }

};

class Constructor{

    public:
        Constructor(){
            cout << endl << ">>---Welcome to Apollo Hospital---<<" <<
                        endl << endl;
        }

        ~Constructor(){
            cout << endl << ">>---Tahnk you for visiting---<<" <<
                        endl << endl;
        }

};


string Hospital::date = "28-11-2023";
string Hospital::doctorName = "Rajendra Shah.";
int Hospital::appoinmentTime = 1;

int main(){

    string name, disease;
    int age;
    long long mobile;

    Constructor make;

    Hospital data[3];

    cout << endl << ">> Enter Patient details <<" <<
            endl;

    for (int i = 0; i < 3; i++){

        cout << endl << ">>    Enter Patient " << i + 1 << 
                endl;
        cout << "      Name : ";
        getline(cin >> ws, name);
        cout << "      Disease : ";
        getline(cin >> ws, disease);
        cout << "      Age : ";
        cin >> age;
        cout << "      Mobile No. : ";
        cin >> mobile;

        data[i].setter(name, disease, age, mobile);
        

    }

    cout << endl << ">> All Patient details <<" <<
            endl;

    for (int i = 0; i < 3; i++){

        data[i].getter(i);

    }

    return 0;
}