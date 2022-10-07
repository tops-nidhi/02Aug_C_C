#include<stdio.h>
void main()
{
	int a/*5*/,b/*3*/,c/*10*/;
	printf("Enter 3 no to check max value:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("A is max");
		}
		else
		{
			printf("C is max.");
		}
	}
	else
	{
		if(b>c)
		{
			printf("B is max.");
		}
		else
		{
			printf("(2nd)C is max.");
		}
	}
	
}
