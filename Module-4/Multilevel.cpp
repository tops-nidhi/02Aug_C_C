#include<iostream>
using namespace std;
class A
{
public:
    void gdata()
    {
        cout<<"This is grand perent.";
    }
};
class B : public A
{
public:
    void pdata()
    {
        cout<<endl;
        cout<<"This is perent class.";
    }
};
class C : public B
{
public:
    void cdata()
    {
        cout<<"\nThis is child class.";
    }
};
int main()
{
    C c1;
    c1.gdata();
    c1.pdata();
    c1.cdata();
}