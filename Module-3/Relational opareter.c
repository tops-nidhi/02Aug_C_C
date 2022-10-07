#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter any 2 no:");
	scanf("%d%d",&x,&y);
	if(x==y)
	{
			printf("Both are same.");	
	}
	else
	{
		if(x>y)
		{
			printf("X is Max.");
		}
		else
		{
			printf("X is min.");
		}
	}
}
