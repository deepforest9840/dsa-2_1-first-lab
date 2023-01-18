#include<stdio.h>
void insertion(int a[],int size){  
int n=size;
	for(int i=1;i<n;i++){
		int key=a[i];
		int j=i-1;
		while(j>=0&& a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
}



int main(){
	int a[]={4,2,2,1,56,3};
	insertion(a,6);
	}
