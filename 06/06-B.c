#include <stdio.h>

void main(){
	int a[10],i,se,n,found=0;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	printf("Enter the values of the array ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the search element : ");
	scanf("%d",&se);
	for(i=0;i<n;i++){
		if(a[i]==se){
			found = 1;
			break;
		}
	}
	if(found == 1){
		printf("Search element fount ");
	}
	else{
		printf("not found");
	}
}
