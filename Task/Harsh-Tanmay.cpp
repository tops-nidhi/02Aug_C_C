#include<iostream>
using namespace std;
class Tanmay
{
public:
    int T;
int  data()
{
    cout<<"This is data function.";
    return 0;
}
};
class Harsh : virtual public Tanmay
{
public:
    int h;
    int hdata()
    {
        cout<<"\nThis is hdata function.";
        return 0;
    }
};
class Harvi : virtual public Tanmay
{
    public:
    int ha;
    int hadata()
    {
        cout<<"\nThis is hadata function.";
        return 0;
    }
};
class Tanya : public Harsh, public Harvi
{
public:
    int tdata()
    {
        cout<<"\nValue of T is:"<<T;
        cout<<"\nValue of h is:"<<h;
        cout<<"\nValue of ha is:"<<ha;
        return 0;
    }
};
int main()
{
    Tanya tan;
    tan.T=10;
    tan.h=15;
    tan.data();
    tan.hdata();
    tan.hadata();
    tan.tdata();
}