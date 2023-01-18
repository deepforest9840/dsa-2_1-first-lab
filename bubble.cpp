#include<stdio.h>
void bubble(int a[],int size){  
int n=size;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j+1]<a[j]){
				int t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
				}
			}
	}
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
}



int main(){
	int a[]={4,2,2,1,56,3};
	bubble(a,6);
	}
