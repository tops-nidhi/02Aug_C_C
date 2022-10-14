#include<iostream>
using namespace std;
class Construct
{
public:
    Construct()
    {
        cout<<"This is simple constructer.";
    }
    Construct(int no) // Parameter Constructor
    {
        cout<<"No is:"<<no;
    }
    int add(int a, int n)
    {
        cout<<"\naddition is:"<<a+n;
        return 0;                                                                                                                              
    }
};
int main()
{
    Construct cn;
    Construct con(67);
    con.add(45,56);
    return 0;
}