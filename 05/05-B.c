#include <stdio.h>

void main(){
	int m,n,rem;
	printf("Enter the value of m,n : ");
	scanf("%d %d",&m,&n);
	while(n%m!=0){
		rem = n % m ;
		n = m;
		m = rem;
	}
	printf("The gcd of given numbers is %d",m);
}
