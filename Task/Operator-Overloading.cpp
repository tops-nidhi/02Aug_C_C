#include<iostream>
using namespace std;
class Operator
{
public:
    int no;
    int get()
    {
        cout<<"\nEnter no:";
        cin>>no;
        return 0;
    }
    // int data()
    // {
    //     int *ptr;
    // }
    Operator operator +(Operator op2)
    {   
        Operator op3;
        op3.no = no + op2.no;
        return op3;
    }
    void show()
    {
        cout<<"\nValue is:"<<no;
    }
};
int main()
{
    Operator obj1, obj2, obj3;
    obj1.get();
    obj2.get();
    obj3 = obj1 + obj2;
    obj3.show();
    return 0;
}