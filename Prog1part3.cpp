#include <iostream>
using namespace std;

int main(){
    int ms, sec, min, track;

    cout << "Milliseconds: ";
    cin >> track;
    
    min = track / 60000;
    track = track - (60000 * min);

    sec = track / 1000;
    track = track - (1000 * sec);

    ms = track;

    cout << "Minute(s): " << min << "\nSecond(s): " << sec << "\nMilliseconds: " << ms << endl;

    return 0;
}

