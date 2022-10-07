#include<iostream>
using namespace std;
class This
{
public:
    int x;
    int data(int x)
    {
        this->x=x;
        // cout<<"The value of parameter x is:"<<x;
        cout<<endl<<"The value of data member x is:"<<this->x;
        return 0;
    }
};
int main()
{
    This t1;
    // t1.x=100;
    t1.data(23);
    return 0;
}
