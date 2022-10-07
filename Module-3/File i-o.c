#include<stdio.h>
int main()
{
	FILE *fptr;
	int i=1,no,ans;
	char str1[10];
	char str2[10];
	printf("Enter no:");
	scanf("%d",&no);
	fptr=fopen("E:/nidhi_batch/task/hello.txt","w");
	ans=no*i;
	fprintf(fptr,"%d*%d=%d",no,i,ans);
	fclose(fptr);
	fptr=fopen("E:/nidhi_batch/task/hello.txt","r");
	fscanf(fptr,"%s",&str1);
	printf("%s",str1);
	fclose(fptr);
}
