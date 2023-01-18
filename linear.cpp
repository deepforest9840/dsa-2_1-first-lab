#include<stdio.h>
 int linear(int a[],int size,int num){
 int n=size;
 	for(int i=0;i<n;i++){
 			if(a[i]==num) return i;
 			
 	}
 	return -1;
 }
int main(){
	int a[]={1,2,4,6,7,8};
	
	int num=4;
	int target=linear(a,6,4);
	printf("%d",target);
}
