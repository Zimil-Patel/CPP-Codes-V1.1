/*
Q.2 Write a Program to get and display N numbers of Fast Food cafe information using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
- cafe_id
- cafe_name
- cafe_type (like a rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
*/
#include<iostream>
using namespace std;

class FoodCafe{

    private:
        int cafe_id;
        string cafe_name;
        string cafe_type;
        int cafe_rating;
        string cafe_location;
        int cafe_establish_year;

    public:
        void setValues(){

            cout << endl << ">>    Id : ";
            cin >> cafe_id;

            cout << "      Name : ";
            getline(cin >> ws, cafe_name);

            cout << "      Ratings : ";
            cin >> cafe_rating;

            cout << "      Cafe Type : ";
            getline(cin >> ws, cafe_type);

            cout << "      cafe location : ";
            getline(cin >> ws, cafe_location);

            cout << "      Establish year : ";
            cin >> cafe_establish_year;

        }

        void getValues(){

            cout << endl << ">> - - - Cafe Details - - - <<" <<
                    endl;

            cout << endl << "ID : " << cafe_id <<
                    endl << "NAME : " << cafe_name <<
                    endl << "RATINGS : " << cafe_rating <<
                    endl << "CAFE TYPE : " << cafe_type <<
                    endl << "CAFE LOCATION : " << cafe_location <<
                    endl << "CAFE ESTABLISH YEAR : " << cafe_establish_year <<
                    endl << endl;

        }

        FoodCafe(){

            cout << endl << ">> - - - Enter Cafe Details - - - <<" <<
                    endl;
                    
        }

        ~FoodCafe(){

            cout << endl << ">> - - - Thank you for Details - - - <<"<<
                    endl;

        }

};



int main(){

    int n;

    cout << "How many food cafe details you want to add : ";
    cin >> n;

    for (int i =0 ; i < n; i++){

        FoodCafe cafe;
        cafe.setValues();
        cafe.getValues();

    }

    return 0;
}
