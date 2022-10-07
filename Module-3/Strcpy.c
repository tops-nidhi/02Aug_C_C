#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char str2[20];
	printf("Enter 1st strring:");//To get 1st srtring from user
	scanf("%s",&str1);
	strcpy(str2,str1);
	printf("2nd string is:%s",str2);
}
