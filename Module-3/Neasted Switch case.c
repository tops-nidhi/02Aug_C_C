#include<stdio.h>
void main()
{
	int ch;
	int ch1;
	printf("\n1.Case1\n\t1.Case(a)\n\t2.Case(b)\n2.Case2\n3.Case3\n\t1.Case(a)\n4.Case4\n");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter your choice:");
			scanf("%d",&ch1);
			switch(ch1)
			{
				case 1:
					printf("\nThis is Case a.");
					break;
				case 2:
					printf("\nThis is case b.");	
					break;
				default:
					printf("\nInvaild choice.....");
					break;	
			}
			break;
		case 2:
			printf("\nThis case 2.");
			break;
		case 3:
			printf("\nEnter your choice:");
			scanf("%d",&ch1);			
			switch(ch1)
			{
				case 1:
					printf("\nThis is case a.");
					break;
				default:
					printf("\nEnter vaild choice.......");
					break;
			}
			break;
		case 4:
			printf("\nThis is case 4.");
			break;
		default:
			printf("Enter vaild choice.....");
			break;
	}
}
