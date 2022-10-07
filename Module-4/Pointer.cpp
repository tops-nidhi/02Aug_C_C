#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	cout<<"Address of the a is:"<<*ptr;
}
