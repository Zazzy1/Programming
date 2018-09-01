#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n;
cin>>n;
int a=n+1;
int primes[a];
for(int i=0;i<=n;i++)
{
primes[i]=1;//setting all to prime before
}
primes[0]=0;//not prime
primes[1]=0;

for(int i=2;i<=sqrt(n);i++){
    if(primes[i]==1){
        for(int j=2;i*j<=n;j++){
            primes[i*j]=0;
        }
    }
}
for(int i=2;i<=n;i++)
{
if(primes[i])
    cout<<i<<" ";
}

return 0;
}
