#include <stdio.h>

void main(){
	int n,s,r;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		s+=r;
		n=n/10;
	}
	printf("The sum of the individual digits = %d",s);
}
