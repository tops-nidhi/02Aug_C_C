#include<stdio.h>
void main()
{
	int a;
	printf("\n1.case1\n2.case2\n");
	printf("Enter your choice:");
	scanf("%d",&a);
	
	switch (1)
	{
		case 1:
			printf("This is case 1.");
			break;
		case 2:
			printf("This is case 2.");
			break;
		default:
			printf("\nEnter vaild choice..........");
			break;
	}
}
