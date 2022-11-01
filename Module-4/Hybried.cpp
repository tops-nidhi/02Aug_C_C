#include<iostream>
using namespace std;
class A
{
public:

    void a()
    {
        cout<<"\nThis is class A.";
    }
};
class B : virtual public A
{
public:
    void b()
    {
        cout<<"\nThis is class B.";
    }
};
class C : virtual public A
{
public:
    void c()
    {
        cout<<"\nThis is class C.";
    }
};
class D : public B, public C
{
public:    
    void d()
    {
        cout<<"\nThis is class D.";
    }
};
int main()
{
    D d1;
    d1.b();
    d1.c();
    d1.d();
}