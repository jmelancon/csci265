#include <iostream>
using namespace std;

int main(){
    int sv, ev, incr;
    
    cout << "Enter starting value: ";
    cin >> sv;

    cout << "Enter ending value: ";
    cin >> ev;

    if (sv > ev){
        incr = -1;
    } else {
        incr = 1;
    }

    cout << endl;

    for (int i = sv; i != ev; i += incr){
        cout << i << endl;
    }

    cout << ev << endl;
}

