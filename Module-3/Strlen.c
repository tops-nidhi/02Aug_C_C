#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int len;
	printf("Enter string:");
	scanf("%s",&str);
	len= strlen(str);	
	printf("The length of the string is:%d",len);
}    
