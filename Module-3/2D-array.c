#include<stdio.h>
void main()
{
	
	int no[5][5]={{1,2,3,4,5},{11,12,13,14,15},{21,22,23,24,25},{31,32,33,34,35},{41,42,43,44,45}};
	int i,j;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("Entrer value no[%d][%d]:", i+1, j+1);
			scanf("%d",&no[i][j]);
		}
	}
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d ",no[i][j]);
		}
		printf("\n");
	}
}