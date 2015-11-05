#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int compare(const void *a ,const void *b)
{       
        int *pa = (int *)a;
        int *pb = (int *)b;
        return (*pa)-(*pb);
}
int main()
{       
        int  N, sort[100];
        cin>>N; 
        for(int i=0;i<N;i++)
        {       
                cin>>sort[i];
        }               
        qsort(sort,N,sizeof(int),compare);
        int temp=sort[0],count=1,out[100];
        out[0] = sort[0];
        for(int i=1;i<N;i++)
        {       
                if(sort[i] == temp)
                {       
                        continue;
                }else
                {       
                        out[count] = sort[i];
                        count++;
                        temp = sort[i];
                }
        }
	cout<<count<<endl;
	for(int i = 0;i <count;i++)
	{
		cout<<out[i]<<" ";
	}
}

