#include<iostream>
using namespace std;
int c=10;
int main()
{
	int c=100;
	cout<<"Value of local variable c is:"<<c;
	cout<<"\nVlaue of global variable c is:"<<::c;
}
