#include<iostream>
using namespace std;

int partitionn(int *A,int start,int endd){
  int pivot=A[endd];
  int partitionnIndex=start;
  for(int i=start;i<endd;i++)
    {
        if(A[i]<=pivot)
        {
        swap(A[i],A[partitionnIndex]);
        partitionnIndex++;
        }
    }
    swap(A[partitionnIndex],A[endd]);
  return partitionnIndex;
}
void quickSort(int *A,int start,int endd){
if(start<endd)
{
int partitionnIndex=partitionn(A,start,endd);
quickSort(A,start,partitionnIndex-1);
quickSort(A,partitionnIndex+1,endd);
}
}

int main(){
int A[]={8,5,9,4,6,3};
quickSort(A,0,5);
for(int i=0;i<6;i++)
    cout<<A[i];
    return 0;
}

