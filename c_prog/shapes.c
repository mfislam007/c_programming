//output different shapes using (nested) loops
#include <stdio.h>
int main(){
	int i,j;//loop counters
	
	printf("\033[2J"); // clear screen
	for(i=0; i<7; i++){
   		printf("*******\n");
	}
	printf("\n\n");// make 2 empty line
	for(i=0; i<7; ++i){
		if(i%2) printf(" "); // when i is an odd number 
		printf("*******\n");

	}
	printf("\n\n");
	for(i=0; i<7;i++){ // 7 rows
		for(j=0; j<=i; j++){ //each row a different number of '*'
			printf("%c",'*');
		}
		printf("\n");	// turn to a new row
	}

	 printf("\n\n");
     for(i=0; i>7;i--){// 7 rows
        for(j=0; j<=i; j++){ //each row a different number of '*'
            printf("%c",'*');
        }
        printf("\n");   // turn to a new row
    }

}
