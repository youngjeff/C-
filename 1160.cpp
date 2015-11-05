#include<iostream>
using namespace std;
int main()
{
int i,j,n,a[100][100],k,m,t,p,sum=0;
cin>>n;
i=n/2;
j=n/2;
m=n/2;
a[i][i]=1;
t=2;
for(k=2;k/2<=m;k=k+2)
{
j=j+1;
for(p=1;p<=k;p++)
{
a[i][j]=t;
t++;
i--;
}
i++;
j--;
for(p=1;p<=k;p++)
{
a[i][j]=t;
t++;
j--;
}
j++;
i++;
for(p=1;p<=k;p++)
{
a[i][j]=t;
t++;
i++;
}
i--;
j++;
for(p=1;p<=k;p++)
{
a[i][j]=t;
t++;
j++;
}
j--;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
if(i==j||i+j==n-1)
sum+=a[i][j];
}
cout<<endl;
}
cout<<sum;
return 0;
}

