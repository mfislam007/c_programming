// this example shows how to write a sentinel-controlled
// loop, We are taking a set of data, the range is non-
// negative
#define SENTINEL -1	
#include <stdio.h>

int main(){
	int counter = 0, value, sum = 0;
	double avg;
	printf("Enter a score (%d to stop):", SENTINEL);
	scanf("%d",&value);
	while(value != SENTINEL){
	sum += value;  		//accumulate the input
	counter ++;
	printf("Enter a score (%d to stop):", SENTINEL);
    scanf("%d",&value);
	}	 
	avg =(double) sum/counter;
	printf("sum = %d\n", sum);
	printf("avg = %.2f\n", avg);

	return 0;
}

