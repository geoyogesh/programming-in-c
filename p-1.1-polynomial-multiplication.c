/*program to do polynomial multiplication ax+b and cx+d = ac x^2 + (bc + ad) x + bd */
/*assuming coeffiends are all positive*/
#include <stdio.h>

int main()
{
	int a,b,c,d,p0,p1,p2;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	printf("enter c :");
	scanf("%d",&c);
	printf("enter d :");
	scanf("%d",&d);
	p2 = a*c;
	p1 = b*c + a*d;
	p0 = b*d;

	printf("Solution is %d x^2 + %d x + %d\n",p2,p1,p0);
	return 0;
}