#include<stdio.h>
int* data(int *no)
{
	printf("No is:%d\n",no);
	no++;
	return no;	
}
int main()
{
	int a=90;
	printf("%d",data(&a));
	return 0;
}
