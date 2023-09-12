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

    cout << min << " minute(s)\n" << sec << " second(s)\n" << ms << " milliseconds\n";

    return 0;
}

