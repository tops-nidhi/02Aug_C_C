#include<iostream>
using namespace std;
int main()
{
	int *ptr,a[10],i;
	ptr=&a[0];
	for(i=0;i<10;i++)
	{
		cout<<"enter value is:";
		cin>>*ptr++;
	}
	ptr=&a[0];
	for(i=0;i<10;i++)
	{
		cout<<"value is:"<<*ptr++<<endl;
	}
}
