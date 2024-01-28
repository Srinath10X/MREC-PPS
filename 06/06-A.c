#include <stdio.h>

void main(){
	int a[10],i,max,min;
	printf("Enter the elements of array ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	min = a[0];
	max = a[9];
	for(i=0;i<10;i++){
		if(max<a[i]){
			max = a[i];
		}
		else if(min>a[i]){
			min = a[i];
		}
	}
	printf("The largest element is %d ",max);
	printf("The smallest element is %d ",min);
}
