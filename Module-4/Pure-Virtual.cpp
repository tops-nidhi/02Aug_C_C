#include<iostream>
using namespace std;
class Virtual
{
public:
    virtual int data()=0;
};
class Virtual1 : public Virtual
{
    public:
    int data()
    {
        cout<<"this is class v";
        return 0;
    }
};
int main()
{
    Virtual1 v1;
    v1.data();
}