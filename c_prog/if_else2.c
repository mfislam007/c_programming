#include<stdio.h>

int main(){
	double x, y;	//coordinate of a point
	printf("Give x and y: ");
	scanf("%lf%lf", %x, %x); 	// don't forget '&' in scanf
	if(x > 0 && y > 0){
		printf("(%.1f,%.1f)is in quadrant I\n", x, y);
	}else if(x > 0 && y < 0){
		printf("(%.1f,%.1f) is in quadrant IV\n", x, y);
	}else if (x < 0 && y > 0){
		printf("(%.1f,%.1f) is in quadrant III\n", x, y);
	}
}
