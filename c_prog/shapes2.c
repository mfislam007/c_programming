// This program outputs different shapes on screen using
// (nested) loops
#include<stdio.h>

int main(){
	int i, j; // loop counters
	// shape 1
	for(i=0; i<7; i++){
		printf("*******\n");
	}
	printf("\n\n"); // make shapes between shapes
	//shape 2
	for(i=0; i<7; ++i){
		if(i%2==1) printf(" "); // to make spaces when i is odd
		printf("*******\n");
	}
	printf("\n\n");
	// shape 3
	for(i=0; i<7; ++i){
		for(j=0; j<i; j++)
			printf("%c",'*');
		// make a new line
		printf("\n");
	}
	printf("\n\n");
	// shape 4
	for(i=0; i<7; i++){
	
	for(j=6;j>i; j--){
	printf("%c",'*');
	}
	printf("\n");
	}
	return 0;

}

