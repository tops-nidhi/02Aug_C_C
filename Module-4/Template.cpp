#include<iostream>
using namespace std;
template <class t>
t add(t a, t b)
{
    return a+b;
}
int main()
{
    cout<<add <int> (12,23);
    cout<<endl<<add <float> (1.02,5.6);
    return 0;
}