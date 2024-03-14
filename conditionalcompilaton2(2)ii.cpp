#include<stdio.h>
#define MAX(x,y)((x>y)?(x):(y))
#define PRINT_MSG(msg) printf("Message:%s\n",msg)
#define SQUARE(x) ((x)*(x))
int main(){
	int a=10,b=20;
	printf("Maximum of %d and %d is %d\n", a,b,MAX(a,b));
	PRINT_MSG("Hello World!");
	printf("Square of %d is %d\n",a,SQUARE(a));
	return 0;
}

