#include<iostream>
using namespace std;
class Grand
{
public:
    void gdata()
    {
        cout<<"This is grand perent.";
    }
};
class Perent : public Grand
{
public:
    void pdata()
    {
        cout<<endl;
        cout<<"This is perent class.";
    }
};
class Child : public Perent
{
public:
    void cdata()
    {
        cout<<"\nThis is child class.";
    }
};
int main()
{
    Child c1;
    c1.gdata();
    c1.pdata();
    c1.cdata();
}