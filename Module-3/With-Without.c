#include<stdio.h>
int no;
int getdata()
{
//	int no;
	printf("Enter no:");
	scanf("%d",&no);
	return no;
}
int main()
{
	printf("Value is:%d",getdata());
}
