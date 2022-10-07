#include<stdio.h>
void main()
{
	int i;
	
	for(i=0;i<10;i++)
	{
//		printf("\nValue of i is:%d",i);
		if(i >=2 && i<5)
			goto dev;
		printf("\nValue of i is:%d",i);
	}
	dev:
		printf("\nThis is lable.");
}
