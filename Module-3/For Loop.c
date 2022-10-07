#include<stdio.h>
void main()
{
	int i;
	int j;
	for(i = 1; i <= 5; i++)//row
	{
		for(j = 1; j <= i; j++)//cloumn
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
