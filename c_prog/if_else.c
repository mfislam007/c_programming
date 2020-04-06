#include<stdio.h>
int main(){
	int num;          // variable declaration
	
	printf("\033[2J");// clear the screen
	printf("\033[12,30H");// move cursor to some location 
	printf("Enter a number: ");
	scanf("%d", &num);

	if(num%3 ==){
		printf("%d is divisible by 3...\n",num);
		if(num%5 == 0){
		printf("%d is also divisible by 5...\n", num);
		
		}
	}
}
