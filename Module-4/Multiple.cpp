#include<iostream>
using namespace std;
class A
{
    public:
    int aid;
    string anm;
    void adata()
    {
        cout<<"Enter your id:";
        cin>>aid;
        cout<<"Enter your name:";
        cin>>anm;
    }
};
class B
{
public:
    int bid;
    string bnm;
    void bdata()
    {
        cout<<"Enter your id:";
        cin>>bid;
        cout<<"Enter your name:";
        cin>>bnm;
    }
};
class C
{
    public:
    int cid;
    string cnm;
    void cdata()
    {
        cout<<"Enter your id:";
        cin>>cid;
        cout<<"Enter your name:";
        cin>>cnm;
    }
};
class Tops : public A, public B, public C
{
public:
    void showdata()
    {
        cout<<"\n\n--------------"<<anm<<"---------------";
        cout<<"\nYour id is:"<<aid;
        cout<<"\n\n--------------"<<bnm<<"---------------";
        cout<<"\nYour id is:"<<bid;
        cout<<"\n\n--------------"<<cnm<<"---------------";
        cout<<"\nYour id is:"<<cid;
    }
};
int main()
{
    Tops t1;
    t1.adata();
    t1.bdata();
    t1.cdata();
    t1.showdata();
}