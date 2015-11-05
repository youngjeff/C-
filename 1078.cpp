#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int compare(const void * a,const void * b)
{
	int *pa = (int *)a;
	int *pb = (int *)b;
	return *pa-*pb;
}
int main()
{
	int N,sort[100000];
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>sort[i];
	}
	qsort(sort,N,sizeof(int),compare);
	for(int i=0;i<N;i++)
	{
		cout<<sort[i]<<" ";			
	}	
}
