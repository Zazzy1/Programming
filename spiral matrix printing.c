/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d\n",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    int k,l=0,r=n-1,u=0,d=n-1;
    int dir=0;
  while(l<=r && u<=d)
  {
      if(dir==0){
          for(k=l;k<=r;k++)
          printf("%d",a[l][k]);
          u++;
      }
      else if(dir==1){
          for(k=u;k<=d;k++)
          printf("%d",a[k][r]);
          r--;
      }
      else if(dir==2){
          for(k=r;k>=l;k--)
          printf("%d",a[d][k]);
          d--;
      }
      else if(dir==3){
          for(k=d;k>=u;k--)
          printf("%d",a[k][l]);
          l++;
      }
      dir=(dir+1)%4;
  }

    return 0;
}
