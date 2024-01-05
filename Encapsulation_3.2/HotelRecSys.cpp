/*
Questions:
Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by 
including the below-mentioned attributes:
- hotel_id
- hotel_name -static
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year - static
- hotel_staff_quantity
- hotel_room_quantity

*/
#include<iostream>
#include<string>
using namespace std;


class HotelData{

    private:
    int hotel_id;
    static string hotel_name;
    string hotel_type;
    int hotel_rating;
    string hotel_location;
    static int hotel_establish_year;
    int hotel_staff_quantitiy;
    int hotel_room_quantity;

    public:
    // static void setHotelNameAndEstablishYear(){
    //     cout << endl << ">> Enter Hotel details <<";

    //     cout << endl << ">> Enter Hotel Name(Global/static) : ";
    //     getline(cin >> ws,hotel_name);

    //     cout << endl << ">> Enter Hotel establish year : ";
    //     cin >> hotel_establish_year;
    // }

    void setter(int hotel_id, string hotel_type, int hotel_rating, string hotel_location, int hotel_staff_quantitiy, int hotel_room_quantity){

        this->hotel_id = hotel_id;
        this->hotel_type = hotel_type;
        this->hotel_rating = hotel_rating;
        this->hotel_location = hotel_location;
        this->hotel_staff_quantitiy = hotel_staff_quantitiy;
        this->hotel_room_quantity = hotel_room_quantity;

    }

    void display(int count){

        cout << endl << ">> Hotel " << count;
        cout << endl << "   Id : " << hotel_id << 
                endl << "   name : " << hotel_name <<
                endl << "   type : " << hotel_type <<
                endl << "   ratings : " << hotel_rating <<
                endl << "   location(city) : " << hotel_location <<
                endl << "   establish year : " << hotel_establish_year <<
                endl << "   staff quantity : " << hotel_staff_quantitiy <<
                endl << "   room qantity : " << hotel_room_quantity <<
                endl << endl;

    }


};

string HotelData::hotel_name = "Darshan Hotel";
int HotelData::hotel_establish_year = 2000;

int main(){

    int n;
    int id, rating, staffQua, roomQua, year;
    string type, location, name;

    cout << endl << ">> How many hotel data you wan to enter : ";
    cin >> n;

    HotelData hotel[n];

    cout << endl << ">> Enter Hotel details <<";
    // hotel[0].setHotelNameAndEstablishYear();

    for (int i = 0; i < n; i++){

        cout << endl << ">> Hotel " << i + 1;
        //id
        cout << endl << "   id : ";
        cin >> id;
        //type
        cout << "   type(hotel / motel) : ";
        getline(cin >> ws,type);
        //location
        cout << "   location : ";
        getline(cin >> ws,location);
        //rating
        cout << "   ratings : ";
        cin >> rating;
        //staff Quantity
        cout << "   staff quantity : ";
        cin >> staffQua;
        //room Quantity
        cout << "   room quantity : ";
        cin >> roomQua;

        hotel[i].setter(id,type,rating,location,staffQua,roomQua);
    }

    cout << endl << endl << ">> Hotel Data <<" << endl;

    for (int i = 0; i < n; i++){

        hotel[i].display(i+1);

    }

    return 0;
}