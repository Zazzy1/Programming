#include<iostream>
using namespace std;
void insertionSort(int A[],int n)
{
    for(int i=1;i<n-1;i++){
       int val=A[i];
       int hole=i;
        while(hole>0 && A[hole-1]>val){
            A[hole]=A[hole-1];
            hole=hole-1;
        }
        A[hole]=val;
    }
}


int main()
{
int A[]={14,25,58,17,49,13,72};
insertionSort(A,7);
for(int i=0;i<7;i++)
    cout<<A[i]<<" ";
}
