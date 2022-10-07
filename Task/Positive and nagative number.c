#include<stdio.h>
void main()
{
	int a;
	printf("Enter Any Number to Find Nagative or Positive");
	scanf("%d",&a);
	if(a>0) 
	{
		if(a==0)
		{
			printf("Number is Zero");
		}
		else
		{
			printf("Number is Number is Positive ");
		}
	}
	else
	{
		if(a<0)
		{
			printf("Number is Nagative");
		}
		else
		{
			printf("Number is Zero");
		}
	}
		
		
}
