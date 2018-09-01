#include<iostream>
using namespace std;
void slectionSort(int A[],int n)
{
    for(int i=0;i<n-1;i++){
        int imin=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[imin])
            imin=j;

        }
        int temp=A[i];
        A[i]=A[imin];
        A[imin]=temp;
    }
}

int main()
{
int A[]={4,5,8,7,9,3,2};
slectionSort(A,7);
for(int i=0;i<7;i++)
    cout<<A[i]<<" ";
}
