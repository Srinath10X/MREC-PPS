#include <stdio.h>

int find_gcd(int x,int y){
	while(x!=y){
		if(x>y){
			return find_gcd(x-y,y);
		}
		else{
			return find_gcd(x,y-x);
		}
	}
	return x;
}

void main(){
	int n,m,gcd;
	printf("Enter the value of m,n : ");
	scanf("%d %d",&m,&n);
	gcd = find_gcd(m,n);
	printf("The gcd of the given two numbers is : %d",gcd);
}
