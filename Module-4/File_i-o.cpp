#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    fstream fout;
    fout.open("D:/nidhi batch/02aug_C_C++/task/hello.txt");
    fout<<"hi";
    fout.close();
    fstream fin("D:/nidhi batch/02aug_C_C++/task/hello.txt");
    // fin.open("D:/nidhi batch/02aug_C_C++/task/hello.txt");
    fin>>str;
    cout<<str;
    fin.close();
    return 0;
}
