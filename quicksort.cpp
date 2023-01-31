#include<stdio.h>
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int Partition(int a[],int s,int e){
	int pivot=a[e];
	int partitionvalue=s;
	int pi=partitionvalue;
	for(int i=s;i<e;i++){
		if(a[i]<=pivot){
				swap(&a[i],&a[pi]);pi++;
		}
	}
	swap(&a[pi],&a[e]);
	return pi;
	
}










void quicksort(int a[],int s,int e){
	if(s<e){
		int partitionvalue=Partition(a,s,e);
		quicksort(a,s,partitionvalue-1);
		quicksort(a,partitionvalue+1,e);
	}
}














int main(){
	int a[]={3333,2221,1212,2345,333};
	quicksort(a,0,5-1);
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}
