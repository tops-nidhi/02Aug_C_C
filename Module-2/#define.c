#include<stdio.h>
#define pi 3.14
void main()
{
	int r;
	float area;
	printf("Enter the radious of the circle:");
	scanf("%d",&r);
	area=pi*r*r;
	printf("\nArea of the circle is:%f",area);
}
