/*
Q.2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
- car_id
- car_company_name
- car_color
- car_model
- car_release_year
*/

#include<iostream>
using namespace std;

//employee class
class CarData{

    public: //public access

    int carId, carReleaseYear;
    string carCompanyName, carModel, carColor; 

};

//method to get values from user
void getValue(string varName, int *intPtr, string *strPtr){

    cout << "Enter car " << varName;
    if (intPtr == 0){
        // cin.ignore();
        getline(cin >> ws, *strPtr);
    }
    else
        cin >> *intPtr;

}


int main(){

    CarData arrOfCar[5];
    int n;

    cout << "\nHow many car data you want to enter : ";
    cin >> n;

    //Getting car data from user
    for (short i = 0; i < n; i++){

        cout << "\n\nEnter car " << i + 1 << " details:" <<
                "\n-----------------------------------------\n";

        getValue("ID : ", &arrOfCar[i].carId, 0);
        getValue("NAME : ", 0, &arrOfCar[i].carCompanyName);
        getValue("COLOR : ", 0, &arrOfCar[i].carColor);
        getValue("MODEL : ", 0, &arrOfCar[i].carModel);
        getValue("RELEASE YEAR : ", &arrOfCar[i].carReleaseYear, 0);

    }

    //printing all car data
    cout << "\n\nCar Data";
    cout << "\n-----------------------------------------";

    for (short i = 0; i < n; i++)
        cout << "\n\nCar " << i + 1 << "\nID : " << arrOfCar[i].carId
            << "\nCOMPANY NAME : " << arrOfCar[i].carCompanyName
            << "\nCOLOR : " << arrOfCar[i].carColor
            << "\nMODEL : " << arrOfCar[i].carModel
            << "\nRELEASE YEAR : " << arrOfCar[i].carReleaseYear
            << "\n\n----------------------------";

    return 0;
}