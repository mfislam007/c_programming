#include<stdio.h>
// declare globle variable
int g; //g is initialized as 0
float fg;

int main(){
    int a=5 ; //a is a local variable, uninitialized (undefined)
    int b = 10;// local variable with initialization
    float fl; 
    fl=999.0/1000;
    fl= (float) a/b; // explicit type casting
    printf("a=%d, b= %d,  g= %d\n", a, b, g);
    printf("fg = %f, fl = %f\n", fg, fl);
    return 0;
}
