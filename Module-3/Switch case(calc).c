#include<stdio.h>
void main()
{
	int ch;
	int a,b;
	printf("Enter any 2 no:");
	scanf("%d%d",&a,&b);
	printf("\n1.Add\n2.Sub\n3.Mul\n4.Mod\n");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nAdd is:%d",a+b);
			break;
		case 2:
			printf("\nSub is:%d",a-b);
			break;
		case 3:
			printf("\nMul is:%d",a*b);
			break;
		case 4:
			printf("\nMod is:%d",a%b);
			break;
		default:
			printf("\nEnter vaild choice..........");
			break;
	}
}
