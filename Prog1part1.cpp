#include <iostream>
using namespace std;

int main(){
    int zip;
    string first, last, address, city, state;

    cout << "First: ";
    getline (cin, first);

    cout << "Last: ";
    getline (cin, last);

    cout << "Address: ";
    getline (cin, address);

    cout << "City: ";
    getline (cin, city);

    cout << "State: ";
    getline (cin, state);

    cout << "Zip: ";
    cin >> zip;

    cout << endl << first << " " << last << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << zip << endl;
    
    return 0;
}
