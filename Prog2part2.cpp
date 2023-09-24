#include <iostream>
using namespace std;

int main(){
    char printChar;
    int x, y;
    
    cout << "Enter width: ";
    cin >> x;

    cout << "Enter height: ";
    cin >> y;

    cout << "Enter character: ";
    cin >> printChar;

    cout << endl;

    for(int i=0; i<y; i++){
        for (int j=0; j<x; j++){
                cout << printChar;
        }
        cout << endl;
    }
}
