// this program will take 2 integers as coordinates and display this
// point on the screen
#include <stdio.h>
#define RED 31
#define GREEN 32
#define YELLOW 33
#define BLUE 34

int main(){
	int x, y;
	printf("five me x and y: ");
	scanf("%d%d",&x, &y);

	printf("\033[2J");
	printf("\033[%d;%dH", 13-y, x+40);
	if (x<0 && y>0) printf("\033[\033[1;%dm",YELLOW);
    else if (x<0 && y>0) printf("\033[\033[1;%dm",RED);
	else if (x<0 && y>0) printf("\033[\033[1;%dm",GREEN);
	else  printf("\033[1;%dm",BLUE);

    printf("%s\n","\u25CF");
	printf("\033[%d;%dH", 13-y+1, x+40);
    printf("(%d,%d)\n", x, y);

	getchar();
	getchar();
	return 0;
}
