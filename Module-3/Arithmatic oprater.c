#include<stdio.h>
void main()
{
	float x,y,ans;
	int a,b;
	int Mod;
	float div;
	printf("Enter any 2 no:");
	scanf("%f%f",&x,&y);
	ans=x+y;
	printf("\nAditiion is:%f",ans);
//	ans=x-y;
	printf("\nSubstraction is:%f",x-y);
	ans=x*y;
	printf("\nMultoiplictionis:%f",ans);
	div=x/y;
	printf("\nDivision is:%f",div);
	a=x;
	b=y;
	Mod=a%b;
	printf("\nModulo is:%d",Mod);
	x++;
	++y;
	printf("\nAfer increment X is:%f & Y is:%f",x,y);
	--x;
	y--;
	printf("\nAfter decrement value of X is:%f & Y is:%f",x,y);
	
}
