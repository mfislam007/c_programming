#include <stdio.h>

int main(){
	int a=10,b=20,c,d;
	printf("give me value of c:");
	scanf("%d",&c);
	d= a+b/c;
	printf("d=%d\n",d);
	d = a%c + b/d; // if there are operators with euqal precedence
				   // they are executed fromleft to right
	printf("d = %d\n", d);

	d = (a+40>c) + (b<=a);
	printf("d = %d\n",d);
	d = ++d++a;
	getchar();

	return 0;
}
