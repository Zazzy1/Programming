#include<stdio.h>
int main()
{
int n;
int rev=0;
scanf("%d",&n);
while(n!=0)
{
rev*=10;
rev+=n%10;
n/=10;
}
printf("%d",rev);

return 0;
}
