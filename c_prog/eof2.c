// this program reads content of a file using normal file operations
#include<stdio.h>
#define GREEN 32
int main(){
	int value, ret, sum = 0, c = 0;
	int row = 11, col = 35;
	FILE *fp; // file handler
	fp = fopen("data.txt","r");
	ret = fscanf(fp, "%d", &value);
	printf("\033[2J"); // clear screen
	printf("\033[1;%dm",GREEN); // set color
	
	while(ret != EOF){
		sum += value;
		c++;
		printf("\033[%d;%dH", row, col);
		printf("\033[1;%dm",GREEN+row-11);
		printf("%5d",value);
		if(c%3==0){
			row++;
			col=35;
		}	// if()
		else col+=5;
		ret = fscanf(fp, "%d",&value);
	}	// while()	
	fclose(fp);// close the opend file
	printf("\033[%d;%dH", ++row,20);
	printf("sum = %d, %d values are read\n", sum, c);
	printf("\033[0m\n");//reset the color
	getchar();
}	// main()
