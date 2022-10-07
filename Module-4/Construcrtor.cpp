#include<iostream>
using namespace std;
class Construct
{
public:
    int a,b;
    int n;
    Construct()
    {
        cout<<"Enter 2 no:";
        cin>>a>>b;
        n=a+b;
        cout<<"Addition is:"<<n;
    }
};
int main()
{
    Construct con;
}