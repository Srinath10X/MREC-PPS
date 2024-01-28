#include <stdio.h>

int fact(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return n*fact(n-1);
	}
}

void main(){
	int n,f;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	f=fact(n);
	printf("the factorial of %d is %d",n,f);
}
