#include<stdio.h>
void main()
{
	int a[10];
	int i;
	int *ptr;
	ptr=&a[0];
	printf("Enter value:-\n");
	for(i = 0; i < 10; i++)
	{
		printf("\nNo[%d]:",i+1);
		scanf("%d",&*ptr++);
	}
	ptr=&a[0];
	printf("\nValue is:-\n");
	for(i = 0; i < 10; i++)
	{
		printf("\nNo[%d]:\t%d",i+1,*ptr++);
	}
}
