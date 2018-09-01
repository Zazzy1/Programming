#include<stdio.h>
long fact(int);
int main()
{
int n;
scanf("%d",&n);

long f=fact(n);
printf("%ld",f);
}


long fact(int n)
{
if(n==0)
{
return 1;
}
else{
    return (n*fact(n-1));
}

}
