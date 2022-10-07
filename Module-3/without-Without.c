#include<stdio.h>
int no;
void getdata()
{
//	int no;
	printf("Enter no:");
	scanf("%d",&no);
}
void showdata()
{
	printf("Value is:%d",no);
}
void data();
void main()
{
	getdata();
	showdata();
	data();
}
void data()
{
	no++;
	printf("\nNo is:%d",no);
}
