#include<iostream>
using namespace std;
class Class
{
public:
    int no;//data member
    int data()//member function
    {
        no=100;
        cout<<"Value of no is:"<<no;
        return 0;
    }
};
int main()
{   
    Class obj;
    obj.data();
    return 0;
}
