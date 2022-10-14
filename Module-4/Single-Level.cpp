#include<iostream>
using namespace std;
class Base
{
    public:
    void show()
    {
        cout<<"This is base class.";
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout<<"\nThis derived class.";
    }
};  
int main()
{   
    Derived d1;
    d1.show();
    d1.print();
    return 0;
}