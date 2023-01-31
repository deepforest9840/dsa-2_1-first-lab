#include<stdio.h>
void b(int a[],int l){
	int i,j;
	int array1[l]={0};
	for(int i=0;i<l;i++){
		array1[a[i]]++;
	}
	for(i=0,j=0;i<l;i++){
		for(;array1[i]>0;array1[i]--){
			a[j++]=i;
		}
	}
	
}
int main(){
	int a[100];
	for(int i=0;i<5;i++){scanf("%d",&a[i]);}
	b(a,5);
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}
