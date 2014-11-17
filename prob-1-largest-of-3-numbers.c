/* finding the largest fo three numbers */

#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter a: ");
	scanf("%i", &a);
	printf("Enter b: ");
	scanf("%i", &b);
	printf("Enter c: ");
	scanf("%i", &c);
	if ((a>b) && (a>c)){
		printf("a is largest \n");
	}
	else if ((b>a) && (b>c)){
		printf("b is largest \n");
	}
	else if((c>a) && (c>b)){
		printf("c is largest \n");
	}
}