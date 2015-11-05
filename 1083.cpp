#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
float f;
int N,n,zi,mu;
cin >>N;
f = (-1 + sqrt(1+8*N))/2;
n = (int)f;
if(f-(float)n != 0)
n += 1;
if(n%2 == 0)
{
zi = N -(n-1)*n/2;
mu = n+1-zi;
}
else
{
zi = n*(n+1)/2-N+1;
mu = n+1-zi;
}
cout<<zi<<"/"<<mu; 	

}
