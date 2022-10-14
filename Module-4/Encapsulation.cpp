#include<iostream>
using namespace std;
class Encapsulation
{
private:
    int a;
    int b;
public:
    void getdata(int c,int n)
    {
        // a=c;
        // b=n;
        cout<<"Value of a is:"<<a<<"\tValue of b is:"<<b;
    }
}obj;
int main()
{
    obj.getdata(78,56);
}