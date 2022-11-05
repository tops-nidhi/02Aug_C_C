#include<iostream>
using namespace std;
class Friend
{
    int no;
    public:
    friend class Frnd;
};
class Frnd
{
    public:
    void data(Friend fn)
    {
        fn.no=100;
        cout<<"\nThis is friend class.";
        cout<<"\nValue of no is:"<<fn.no;
    }
};
int main()
{
    Friend fn1;
    Frnd fn2;
    fn2.data(fn1);
}