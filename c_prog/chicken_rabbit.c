// this program shows 2 veersions of function which solves 
// chicken-rabbit problem
#include <stdio.h>
int ch_ra_v1(int H, int L);
void ch_ra_v2(int H, int L, int *C, int *R); 
int main(){
	int heads, legs, chickens, rabbits;
	printf("input heads: ");
	scanf("%d",&heads);
	printf("input legs: ");
    scanf("%d",&legs);

//	chickens = ch_ra_v1(heads, legs);
//	printf("No. C = %d, No. R = %d\n", chickens, heads-chickens);

	ch_ra_v2(heads, legs, &chickens, &rabbits);
	printf("No of C = %d, No of R =%d\n", chickens, rabbits);
}
/* function defination */
void ch_ra_v2(int H, int L, int *C, int *R){
int c;// assume number of chickens 
	for(c=0; c<=H; c++){ // go through all the possibilities
        if (c*2+(H-c)*4==L) break;// if the current assumption is ok
	}
	if(c<=H){
	*C= c;
	*R= H-c;
	}else{
	*C=-1;
	*R=-1;
	}
}
 int ch_ra_v1(int H, int L){
	int c;
	for(c=0; c<=H; c++){ // suppose c is number of chickens
		if (c*2+(H-c)*4==L) break;
	}
	if(c<=H return c;
    else return -1; // no solution is found

	return c;
	
}

