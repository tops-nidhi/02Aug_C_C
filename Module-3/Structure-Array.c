#include<stdio.h>
struct Stdata
{
	int id;
	char nm[20];
};
int main()
{
	struct Stdata obj[10];
	int i;
	printf("Enter value:-\n");
	for(i=0;i<5;i++)
	{
		printf("Id[%d]:",i);
		scanf("%d",&obj[i].id);
		printf("Name[%d]:",i);
		scanf("%s",&obj[i].nm);
	}
	printf("\nValue is:-\n");
	for(i=0;i<5;i++)
	{
		printf("\nId[%d] is:%d\tName[%d] is:%s",i,obj[i].id,i,obj[i].nm);
	}
}
