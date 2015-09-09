
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
ofstream inFile;
inFile.open("inFile",ios::trunc);

int i;
char a='a';
for (i=1;i<=26;i++)
{
inFile<<setw(2)<<i<<"\t"<<a<<"\n";
a++;
}
inFile.close();


}
