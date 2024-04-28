#include <iostream>
#include <vector>
#include <string>
using namespace std;

void searchName(const vector<string>& names, const string& name) {
    bool found = false;
    for (size_t i = 0; i < names.size(); ++i) {
        if (names[i] == name) {
            found = true;
            cout << "Founded at index: " << i << endl;
            break;
        }
    }
    if (!found) {
        cout << "Name not found in the vector." << endl;
    }
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<string> names;
    string input;

    for (int i = 0; i < size; ++i) {
        cout << "Enter value: ";
        cin >> input;
        names.push_back(input);
    }

    string searchValue;
    cout << "\nEnter your value: ";
    cin >> searchValue;

    searchName(names, searchValue);

    return 0;
}
