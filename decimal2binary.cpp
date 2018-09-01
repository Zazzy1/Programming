#include<iostream>
using namespace std;
int main()
{
int n,r,base=1,sum=0;
cin>>n;
while(n!=0)
{
r=n%2;
sum+=r*base;
n/=2;
base*=10;
}
cout<<sum;
return 0;
}
