#include<iostream>
using namespace std;
int  add(int a, int b)
{

	return a+b;
} 
int main()
{
	int a, b;
	cout<<"Enter no:";
	cin>>a>>b;
	cout<<"Addition is:"<<add(a,b);
	
}
