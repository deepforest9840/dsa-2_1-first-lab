#include<stdio.h>
void selection(int a[],int size){  
int n=size;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
				}
			}
	}
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
 }
}



int main(){
	int a[]={4,2,2,1,56,3};
	selection(a,6);
}
