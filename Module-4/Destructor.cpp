#include<iostream>
using namespace std;
class Construct
{
public:
    int a,b;
    int n;
    Construct() // Constructer
    {
        cout<<"Enter 2 no:";
        cin>>a>>b;
        n=a+b;
        cout<<"Addition is:"<<n;
    }
    ~Construct()//Destructor
    {
        cout<<endl<<"\"Memory successfully free.\"";
    }
};
int main()
{
    Construct con;
}