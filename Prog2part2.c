#include <stdio.h>
#include <string.h>

int main(){
    char printChar;
    int x, y, i, j;
    
    printf("Enter width: ");
    scanf("%d", &x);

    printf("Enter height: ");
    scanf("%d", &y);

    printf("Enter character: ");
    scanf(" %c", &printChar);

    printf("\n");

    i = 0;
    while(i < y){
        j = 0;
        while(j < x){
                printf("%c", printChar);
                j++;
        }
        printf("\n");
        i++;
    }
}
