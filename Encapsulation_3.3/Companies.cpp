/*
Q.1 Write a Program to get and display N numbers of Diamond companies information using encapsulation and use of Parameterised Constructor by including below
mentioned attributes:
- comp_id
- comp_name
- comp_staff_quantity
- comp_revenue (per year)
- comp_import_raw_diamonds (no. of raw diamonds
imported per year)
- comp_export_diamonds (no. of diamonds per year)
- comp_ceo (name of CEO of the company)
*/
#include<iostream>
using namespace std;

class Companies{

    private:
        int comp_id;
        string comp_name;
        int comp_staff_quantity;
        int comp_revenue; //per year
        int imported_diamonds; //no. of diamonds
        int exported_diamonds;
        string comp_ceo;

    public:
        void setterAndGetter(int comp_id, string comp_name, int comp_staff_quantity, int comp_revenue, 
        int imported_diamonds, int exported_diamonds, string comp_ceo){

            this->comp_id = comp_id;
            this->comp_name = comp_name;
            this->comp_revenue = comp_revenue;
            this->comp_staff_quantity = comp_staff_quantity;
            this->imported_diamonds = imported_diamonds;
            this->exported_diamonds = exported_diamonds;
            this->comp_ceo = comp_ceo;

            cout << endl << ">>- - - - Comapny Details - - - -<<" <<
                    endl;
            cout << endl << "Id : " <<  this->comp_id <<
                    endl << "Name : " << this->comp_name <<
                    endl << "Staff Quantity : " << this->comp_revenue <<
                    endl << "Revenue per year : " << this->comp_revenue <<
                    endl << "Imported diamonds : " << this->imported_diamonds <<
                    endl << "Exported diamonds : " << this->exported_diamonds <<
                    endl << "Company CEO : " << this->comp_ceo <<
                    endl << endl;
        }

        Companies(){

            int id, staff, rev, imported, exported;
            string ceo, name;

            cout << endl << ">>- - - - Comapny Details - - - -<<" <<
                    endl;
            cout << endl << ">>    Id : ";
            cin >> id;
            cout << "      Name : ";
            getline(cin >> ws, name);
            cout << "      Staff Quantity : ";
            cin >> staff;
            cout << "      Revenue per year : ";
            cin >> rev;
            cout << "      Imported diamonds : ";
            cin >> imported;
            cout << "      Exported diamonds : ";
            cin >> exported;
            cout << "      Company CEO : ";
            getline(cin >> ws, ceo);

            setterAndGetter(id, name, staff, rev, imported, exported, ceo);

        }

};

int main(){

    int n;

    cout << "How many company you want to add and display : ";
    cin >> n;

    for(int i = 0; i < n; i++){

        Companies make;

    }

    return 0;
}