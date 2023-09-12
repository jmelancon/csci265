#include <iostream>
using namespace std;

int main(){
    int pennies, nickels, dimes, quarters, total, cents, dollars;

    cout << "Quarters: ";
    cin >> quarters;

    cout << "Dimes: ";
    cin >> dimes;

    cout << "Nickels: ";
    cin >> nickels;
    
    cout << "Pennies: ";
    cin >> pennies;

    total = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;
    cents = total % 100;
    dollars = (total - cents) / 100;

    cout << "Amount: $" << dollars << "." << cents << endl;

    return 0;
}
