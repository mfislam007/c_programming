// output unicode of japanese character
#define RED 31
#define GREEN 32
#include<stdio.h>

int main(){
    printf("\033[1;%dm", GREEN);// set Green color 
    printf("\033[12;35H");
    printf("%s%s%s%s%s\n","\u3042", "\u3044", "\u3046","\u3048", "\u304A" );
    
    getchar();
    return 0;
}
