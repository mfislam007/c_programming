#include <stdio.h>

int main(){
    /* my first program in c */
   /* clear the whole screen */
    printf("\033[2J");
    /* change  text color to be RED */
    printf("\033[1;31m");
   /* set cursor  to the center of screen */
    printf("\033[12;35H");
   /* the following  text will  be in RED */
    printf("Hello, World!\n");

    return 0;
}

