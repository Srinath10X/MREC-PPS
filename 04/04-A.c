#include <stdio.h>

void main(){
	int n,s,r,t;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	t=s;
	s=0;
	while(n>0){
		n=n%10;
		r=n/10;
		s=s+r*r*r;
	}
	if(t==s){
		printf("Armstrong");
	}
	else{
		printf("Not armstrong");
	}
}
