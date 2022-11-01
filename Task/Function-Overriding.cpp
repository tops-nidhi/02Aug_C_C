#include<iostream>
using namespace std;
class A
{
public:
    int add(int a, int b)
    {
        return a+b;
    }
};
class B
{
public:
    int add(int a, int b)
    {
        return a+b;
    }
};
int main()
{
    A a;
    B b;
    cout<<a.add(12,45);
    cout<<endl<<b.add(78,96);
}