#include <iostream>
using namespace std;

int main(){
    char printChar;
    int x, y, i, j;
    
    cout << "Enter width: ";
    cin >> x;

    cout << "Enter height: ";
    cin >> y;

    cout << "Enter character: ";
    cin >> printChar;

    cout << endl;
    
    i = 0;
    while(i < y){
        j = 0;
        while(j < x){
                cout << printChar;
                j++;
        }
        cout << endl;
        i++;
    }
}
