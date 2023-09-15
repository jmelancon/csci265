#include <stdio.h>
#include <string.h>

int main(){
    int pennies, nickels, dimes, quarters, total, cents, dollars;

    printf("Quarters: ");
    scanf("%d", &quarters);

    printf("Dimes: ");
    scanf("%d", &dimes);

    printf("Nickels: ");
    scanf("%d", &nickels);
    
    printf("Pennies: ");
    scanf("%d", &pennies);

    total = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;
    cents = total % 100;
    dollars = (total - cents) / 100;

    printf("Amount: %d.%02d\n", dollars, cents);

    return 0;
}
