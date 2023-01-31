#include<stdio.h>
int max(int a[],int l){
	int m=a[0];
	for(int i=1;i<l;i++){
		if(a[i]>m) m=a[i];
	}
	return m;
}
void countsort(int a[],int l,int max){
max=max+1;
	int n=l,count[max]={0};
	for(int i=0;i<n;i++){
		count[a[i]]++;
	}
	for(int i=1;i<max;i++){
		count[i]+=count[i-1];
	}
	int output[n];
	for(int i=n-1;i>=0;i--){
		output[--count[a[i]]]=a[i];
	}
	for(int i=0;i<n;i++){
	a[i]=output[i];
	}
	
}


int main(){
	int ar[]={322,112,4,25,13};
	countsort(ar,5,max(ar,5));
	for(int i=0;i<5;i++){
		printf("%d ",ar[i]);
	}
	
}
