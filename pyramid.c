#include<stdio.h>

int main()
{
    int n,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++){//for n rows
    for(j=1;j<=2*n-1;j++){//for n rows we have 2*n -1 columns in a pyramid
        if(j >= n-(i-1) && j <= n+(i-1))
           {
               printf("*");
           }
           else{
            printf(" ");
           }

    }
    printf("\n");
}
    return 0;
}
