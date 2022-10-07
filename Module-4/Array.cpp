#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i;
	for(i= 0; i < 10; i++)
	{
		cout<<"Enter "<<i<<" no:";
		cin>>a[i];
	}
	for(i = 0; i < 10; i++)
	{
		cout<<"Value "<<i<<" of no is:"<<a[i]<<endl;
	}
}
