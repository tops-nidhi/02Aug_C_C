#include<stdio.h>
struct student
{
	int id;	
	char nm[10];
}st;
int main()
{
//	struct student st;
//	st.id=202;
	printf("Enter id:");
	scanf("%d",&st.id);
	printf("Enter student name:");
	scanf("%s",&st.nm);
	printf("Id is:%d",st.id);
	printf("\nName is:%s",st.nm);
}
