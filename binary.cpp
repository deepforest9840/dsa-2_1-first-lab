#include<stdio.h>
int binary(int a[],int size,int num){
	int low=0,high=size-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(num>a[mid]) low=mid+1;
		else if(num<a[mid]) high=mid-1;
		else return mid;
	}
	return -1;
	
}
int main()
{
	int a[]={2,3,5,6,7,8};
	printf("%d",binary(a,6,5));
}
