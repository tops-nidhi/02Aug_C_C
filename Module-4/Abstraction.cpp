#include<iostream>
using namespace std;
class Abstract
{
    int x,y;
public:
    int data()
    {
        cout<<"Enter 2no:";
        cin>>x>>y;
        cout<<"Value is:"<<x<<" "<<y;
        return 1;
    }
    int show()
    {
        cout<<endl;
        cout<<"Value of x is:"<<x<<" & y is:"<<y;
        return 0;
    }
};  
int main()
{
    Abstract ab;
    ab.data();
    ab.show();
    return 0;
}
