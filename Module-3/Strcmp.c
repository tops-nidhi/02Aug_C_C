#include<string.h>
#include<stdio.h>
void main()
{
	char str1[20];
	char str2[20];
	int cmp;
	printf("Enter 2 string:");
	scanf("%s%s",&str1,&str2);
	cmp=strcmp(str1,str2);
	if( cmp > 0)
		printf("Max string is:%s",str1);
	else if(cmp < 0)
		printf("Max string is:%s",str2);
	else
		printf("Both are equle.");
}
