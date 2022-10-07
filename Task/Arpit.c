#include<stdio.h>
int main()
{
	FILE *ptr;
	char a[10];
	ptr=fopen("E:/Nidhi_Batch/02aug_c,c++/Module-4/Demo.txt","w");
	fprintf(ptr,"Hello");
	fclose(ptr);
	ptr=fopen("E:/Nidhi_Batch/02aug_c,c++/Module-4/Demo.txt","r");
	fscanf(ptr,"%s",&a);
	printf("%s",a);
	fclose(ptr);
}
