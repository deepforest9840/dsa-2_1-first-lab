#include<stdio.h>
int gmax(int a[],int l){
	int m=a[0];
	for(int i=1;i<l;i++){
		if(a[i]>m) m=a[i];
		
	}
	return m;
}
void countsort(int a[],int l,int place)
{
	int max=gmax(a,l);
	max=max+1;
	int count[max]={0};
	for(int i=0;i<l;i++){
		count[(a[i]/place)%10]++;
	}
	for(int i=1;i<max;i++){
		count[i]+=count[i-1];
	}
	int output[l];
	for(int i=l-1;i>=0;i--){
		output[--count[(a[i]/place)%10]]=a[i];
		//count[(a[i]/place)%10]--;
	}
	for(int i=0;i<l;i++){
		a[i]=output[i];
	}
}
void radixsort(int a[],int l){
	int place;
	int max=gmax(a,l);
	for(place=1;max/place>0;place*=10){
		countsort(a,l,place);
	}
}
int main(){
	int a[]={322,112,211,4,12};
	radixsort(a,5);
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}
