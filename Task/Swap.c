#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter any 2 no");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;	
	printf("value of a is:%d, \n Value of b is:%d",a,b);
	
}
