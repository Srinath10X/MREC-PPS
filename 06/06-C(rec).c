#include <stdio.h>

int binary_search(int a[],int se,int low,int high){
	int mid;
	mid = (low+high)/2;
	if(low>high){
		return -1;
	}
	if(se==a[mid]){
		return mid;
	}
	else if(se<a[mid]){
		binary_search(a, se, low, mid -1);
	}
	else{
		binary_search(a, se, mid+1, high);
	}
}

void main(){
	int a[10],i,se,n,p,low,high;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	printf("Enter the values of the array ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the search element : ");
	scanf("%d",&se);
	low = 0;
	high = n-1;
	p = binary_search(a,se,low,high);
}


