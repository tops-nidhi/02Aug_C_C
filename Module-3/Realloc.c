#include<stdlib.h>
#include<stdio.h>
int main()
{
	int *ptr;
	int i,no;
	printf("Enter size:");
	scanf("%d",&no);
	ptr=(int*)calloc(no,sizeof(int));
	for(i=0;i<no;i++)
	{
		printf("Enter value %d:",i);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<no;i++)
	{
		printf("\nValue %d is:%d",i,ptr[i]);
	}
	printf("\nEnter new size:");
	scanf("%d",&no);
	ptr=(int*)realloc(ptr,no*sizeof(int));
	for(i=0;i<no;i++)
	{
		printf("Enter value %d:",i);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<no;i++)
	{
		printf("\nValue %d is:%d",i,ptr[i]);
	}
	free(ptr);
	return 0;
}
