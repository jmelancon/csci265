#include <stdio.h>
#include <string.h>

int main(){
    char first[20], last[20], address[48], city[32], state[20], zip[10];

    printf("First: ");
    fgets(first, 19, stdin);
    first[strcspn (first, "[\r\n]")] = '\0'; //replace the newline char with null character

    printf("Last: ");
    fgets(last, 19, stdin);
    last[strcspn (last, "[\r\n]")] = '\0'; //replace the newline char with null character

    printf("Address: ");
    fgets(address, 47, stdin);
    address[strcspn (address, "[\r\n]")] = '\0'; //replace the newline char with null character

    printf("City: ");
    fgets(city, 31, stdin);
    city[strcspn (city, "[\r\n]")] = '\0'; //replace the newline char with null character

    printf("State: ");
    fgets(state, 19, stdin);
    state[strcspn (state, "[\r\n]")] = '\0'; //replace the newline char with null character

    printf ("Zip: ");
    fgets(state, 19, stdin);
    state[strcspn (state, "[\r\n]")] = '\0'; //replace the newline char with null character

    printf("\n%s %s\n", first, last);
    printf("%s\n", address);
    printf("%s, %s  %s\n", city, state, zip);

    return 0;
}

