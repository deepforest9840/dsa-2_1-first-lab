#include<iostream>
using namespace std;

void merge(int ar[],int l,int mid,int r){
	int n1=mid-l+1;
	int n2=r-mid;
	int a[n1],b[n2];
	for(int i=0;i<n1;i++){
		a[i]=ar[i+l];
	}
	for(int i=0;i<n2;i++){
		b[i]=ar[i+mid+1];
	}
	int i=0,j=0,k=l;
	while(i<n1&&j<n2){
		if(a[i]<b[j]) {ar[k]=a[i];k++;i++;}
		else {ar[k]=b[j];k++;j++;}
	}
	while(i<n1) {ar[k]=a[i];k++;i++;}
	while(j<n2) {ar[k]=b[j];k++;j++;}
	//printf("dfds");
}



void mergesort(int ar[],int l,int r){
	if(l<r){
		int mid=(l+r)/2;
	//printf("dfds");
		mergesort(ar,l,mid);
		mergesort(ar,mid+1,r);
		merge(ar,l,mid,r);
		//printf("dfdsf");
	}
	else return;
}
//void lmerge(int a[]){
//	int n=(int)sizeof(a)/(int)sizeof(a[0]);
	//mergesort(a,0,n);
//}




int main(){
	int ar[]={3,2,1,4,5};
	//int n=(int)sizeof(a)/(int)sizeof(a[0]);
	//lmerge(a);
	mergesort(ar,0,5);
	for(int i=0;i<5;i++){
		printf("%d ",ar[i]);
	}
}

