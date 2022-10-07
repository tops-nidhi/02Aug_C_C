#include<stdio.h>
void main()
{
	int a=90;
	int *ptr;
	ptr=&a;
//	printf("\nAddress of the value is:%d",ptr);
//	printf("\nValue of the address is:%d",*ptr);
	printf("\nValue of a is:%d",a);
//	ptr++;
//	printf("\nAfter increment address is:%d",ptr);
	*ptr=13;
	*ptr++;
//	a=13;
	printf("\nValue of a is:%d",ptr);
}
