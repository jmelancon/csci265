#include <stdio.h>
#include <string.h>

int main(){
    char printChar;
    int x, y;
    
    printf("Enter width: ");
    scanf("%d", &x);

    printf("Enter height: ");
    scanf("%d", &y);

    printf("Enter character: ");
    scanf(" %c", &printChar);

    printf("\n");

    for(int i=0; i<y; i++){
        for (int j=0; j<x; j++){
                printf("%c", printChar);
        }
        printf("\n");
    }
}
