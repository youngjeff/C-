#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    string wordString;
    cin>>wordString;
    for(int i = wordString.length() - 1; i >= 0 ; i--)
    {
        if(wordString[i] >='a')
        {
            wordString[i]-=32;
        }
        else if(wordString[i] <='Z')
        {
            wordString[i] += 32;
        }

        cout<<wordString[i];
    }
    cout<<endl;
}

