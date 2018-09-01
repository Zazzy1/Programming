#include<stdio.h>
int binarySearch(int Arr[], int n, int target) {

	//set stating and ending index
	int start = 0, ending = n-1;

	while(start <= ending) {
		// take mid of the list
		int mid = (start + ending) / 2;

		// we found a match
		if(Arr[mid] == target) {
			return mid;
		}
		// go on right side
		else if(Arr[mid] < target) {
			start = mid + 1;
		}
		// go on left side
		else {
			ending = mid - 1;
		}
	}
	// element is not present in list
	return -1;
}
int main()
{
int A[]={1,4,5,6,8,9,21};
int x;
printf("enter the target element\n");
scanf("%d",&x);
int index=binarySearch(A,7,x);
if(index!=-1){
    printf("index at %d",index+1);
}
else
    printf("out of bound");
return 0;
}
