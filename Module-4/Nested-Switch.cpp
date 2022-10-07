#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any Number";
    cout<<"1.Atmiya\n 2.Darshan\n 3.Marwadi \n 4.Ganpat";
    cin>>a;
    switch(a)
    {
        case 1:
        cout<<"Atmiya";
        cout<<"1.B.tech \n 2.BBA";
        cin>>b;
        switch(b)
        {
            case 1:
            cout<<"B.tech";
            break;

            case 2:
            cout<<"BBA";
            break;

            default:
            cout<<"Wrong Choice";
        }
        break;
        case 2:
        cout<<"Darshan";
        cout<<"1.Diploma \n 2.BSC";
        cin>>a;
        break;

        switch(a)
        {
            case 1:
            cout<<"Diploma";
            break;

            case 2:
            cout<<"BSC";
            break;

            default:
            cout<<"Wrong Choice";
        }
        case 3:
        cout<<"Marwadi";
        break;

        case 4:
        cout<<"Ganpat";
        break;

        default:
        cout<<"Wrong Choice";
    }
        
        
}