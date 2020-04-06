#include <stdio.h>
// this pogram reads the content of a file using redirection

int main(){
	int value, ret, sum = 0, c = 0;
 
//	printf("Reading... please wait...\n");

	ret = scanf("%d", &value); // read the first value
	while(ret != EOF) {        // if we are <not at the end of file
		printf("%5d", value);
		c++;
		if(c%3==0) printf("\n");// for every 3 number, change line
		sum += value;  // a legal value is read, sun it
		ret = scanf("%d", &value); // read text value
	}
	printf("\nsum = %d\n", sum);
	return 0;
}
