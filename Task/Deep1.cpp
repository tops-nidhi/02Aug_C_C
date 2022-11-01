#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"This is A class."<<endl;
    }
};
class B : public A
{
    public:
    B()
    {
        cout<<"This is B class."<<endl;
    }
};
class C : public B
{
    public:
    C()
    {
        cout<<"This is C class."<<endl;
    }
};

class D : public C
{
    public:
    D()
    {
        cout<<"This is D class."<<endl;
    }
};

class E : public C
{
    public:
    E()
    {
        cout<<"This is E class."<<endl;
    }
};

class F : public C
{
    public:
    F()
    {
        cout<<"This is F class."<<endl;
    }
};

class G : public F
{
    public:
    G()
    {
        cout<<"This is G class."<<endl;
    }
};

class H : public D , public E
{
    public:
    H()
    {
        cout<<"This is H class."<<endl;
    }
};

int main()
{
    G obj1;
    H obj2;
}