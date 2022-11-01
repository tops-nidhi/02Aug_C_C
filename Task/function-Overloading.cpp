#include<iostream>
using namespace std;
class Overloading
{
    public:
    int add(int a, int b)
    {
        cout<<"Addition is:"<<a+b<<endl;
        return 0;
    }
    int add (int a, int b, int c)
    {
        cout<<"Addion of 3 variable is:"<<a+b+c;
        return 0;
    }
};
int main()
{
    Overloading obj;
    obj.add(12,45);
    obj.add(12,45,78);
}