#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int i,n;
scanf("%d",&n);
int *a=(int *)malloc(n*sizeof(int));
i=0;
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
i=0;
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}
