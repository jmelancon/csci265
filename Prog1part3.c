#include <stdio.h>
#include <string.h>

int main(){
    int ms, sec, min, track;

    printf("Milliseconds: ");
    scanf("%d", &track);
    
    min = track / 60000;
    track = track - (60000 * min);

    sec = track / 1000;
    track = track - (1000 * sec);

    ms = track;

    printf("minutes(s): %d\nsecond(s): %d\nmilliseconds: %d\n", min, sec, ms);
    //printf("%d minute(s)\n%d second(s)\n%d milliseconds\n", min, sec, ms);

    return 0;
}

