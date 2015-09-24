#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    //int a;
    char a='a';
    for(int i=0;i<26;i++)
    {
        cout<<setw(2)<<i+1<<setw(2)<<a<<endl;
        a++;

    }
    return 0;
}

