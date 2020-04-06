//this program shows the address of variable
#include<stdio.h>

int main(){
	int i;
	int a[10]= {10, 9, 8, 7, 6};
	int *p;
	p = a;
	printf("address of i = %p\n",&i);
	printf("address of a = %p\n",a);
	puts("");// make an empty line
	for(i = 0; i<10; i++)
	printf("address of a[%d] = (%p)\n", i, &a[i], p++);

	p = a;

	for(i = 0; i<10; i++){
    printf("a[%d] = %d\n",i,*p++);
	}
	i = 21;
	printf("%d\n", *p);

	
	
}
