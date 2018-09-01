#include<iostream>
using namespace std;
void bubbleSort(int A[],int n)
{
    for(int k=1;k<=n-1;k++){
            int flag=0;
        for(int i=0;i<=n-k-1;i++){
            if(A[i]>A[i+1])
            {
            //swap(A[i],A[i+1])
            int temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
            flag=1;
            }
        }
        if(flag==0)
            break;
    }
}


int main()
{
int A[]={4,5,8,7,9,3,2};
bubbleSort(A,7);
for(int i=0;i<7;i++)
    cout<<A[i]<<" ";
}
