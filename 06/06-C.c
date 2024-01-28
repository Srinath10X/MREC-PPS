#include <stdio.h>

void main(){
	int a[10],i,se,n,found=0,low,mid,high;
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
	for(i=0;i<n;i++){
		if(se==a[mid]){
			found = 1;
			break;
		}
		else if(se>a[mid]){
			low = mid - 1;
		}
		else{
			high = mid + 1;
		}
	}
	if(found==1){
		printf("The search element found ");
	}
	else{
		printf("search element not found");
	}
}

