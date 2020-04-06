//this program demonstrates the use of static variable
#include<stdio.h>

void foo(){
	int i;// normal local variable will use stack memory
	static int ii;// static variable will use heap memory
	printf("in foo() i = %d",i);// value of i is random in next call
	printf("ii = %d\n",ii);
	ii++;// value of ii will remain in next call

}
int main(){
	int i;
	foo();
	printf("in main() i = %d\n",i++);
	foo();
    printf("in main() i = %d\n",i);
	foo();
}
