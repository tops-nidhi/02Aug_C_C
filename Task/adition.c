#include<stdio.h>
void main()
{
	int a[5][5];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter value a[%d][%d]:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n enter value:%d",a[i][j]);
		}
	}
}
