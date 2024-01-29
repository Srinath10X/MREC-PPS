#include <stdio.h>

int main(){
	int n,a[10],temp,min,i,j;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
  for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if (a[j]>a[min]) {
				min = j;
			}
		}
	}
	printf("The sorted arrray is : ");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
