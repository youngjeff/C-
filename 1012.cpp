#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
double x,y;
cin>>x>>y;
int num = y/x;
int count =1;
int temp = 2;
for(int i=2;i<=num/2;i++)
{
	if(num % i==0)
	{
		num = num / i;
		if(temp != i)
		{
			temp = i;
			count++;			
		}			
	}else{
		i++;
		
	}	
}
cout <<pow(2,count)<<endl;
}
