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
        Hospital(){

            cout << endl << ">>---Welcome to Apollo Hospital---<<" <<
                    endl << endl;
        }

        ~Hospital(){
            cout << endl << ">>---Tahnk you for visiting---<<" <<
                    endl << endl;
        }

        void setter(string patientName, string disease, int age, long long mobileNo){

            this->patientName = patientName;
            this->disease = disease;
            this->age = age;
            this->mobileNo = mobileNo;
        }

        void getter(int count){

            cout << endl << ">> All Patient details are <<" <<
                    endl;

            for (int i = 0; i < 3; i++){

                cout << endl << ">>    Date : " << date <<
                        endl << "      Time : " << appoinmentTime <<
                        endl << "      Dotor : " << doctorName <<
                        endl << "      Patient Name : " << patientName <<
                        endl << "      Disease : " << disease <<
                        endl << "      age : " << age <<
                        endl << "      mobile No. : " << mobileNo <<
                        endl;

            }

        }

};

int main(){

    return 0;
}