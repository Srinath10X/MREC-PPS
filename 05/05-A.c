#include <stdio.h>

void main(){
	int n,fact=1,i;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		fact=fact*i;
	}
	printf("The factorial of given number is : %d ",fact);
}
