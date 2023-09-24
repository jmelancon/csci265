#include <stdio.h>
#include <string.h>

int main(){
    int sv, ev, incr;
    
    printf("Enter starting value: ");
    scanf("%d", &sv);

    printf("Enter ending value: ");
    scanf("%d", &ev);

    if (sv > ev){
        incr = -1;
    } else {
        incr = 1;
    }

    printf("\n");

    for (int i = sv; i != ev; i += incr){
        printf("%d\n", i);
    }

    printf("%d\n", ev);
}

