#include<iostream>
using namespace std;
template <typename y>
class Template
{
    public:
    y add(y a, y b)
    {
        return a+b;
    }
};
int main()
{
    Template <int>t1;
    cout<<t1.add(12,23);
    Template <float>t2;
    cout<<endl<<t2.add(5.6,7.9);
    return 0;
}