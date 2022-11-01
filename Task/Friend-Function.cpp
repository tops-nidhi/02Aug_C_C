#include<iostream>
using namespace std;
class Friend 
{
    int no;
    public:
    friend int add(Friend frnd);
};
int add(Friend frnd)
{
    cout<<"Enter value of no:";
    cin>>frnd.no;
    cout<<"Value of no is:"<<frnd.no;
    return 0;
}
int main()
{
    Friend obj;
    add(obj);
}