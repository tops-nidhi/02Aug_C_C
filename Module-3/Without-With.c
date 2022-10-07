#include<stdio.h>
data(int *no)
{
	printf("No is:%d",no);
	no++;
	printf("\nNo is:%d",no);
}
main()
{
	int a=90;
	data(&a);
}
