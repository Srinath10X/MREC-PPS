#include <stdio.h>

void main(){
	int a,b,c;
	printf("Enter three numbers = ");
	scanf("%d %d %d",&a,&b,&c);
	printf("The biggest number is = ");
	if (a>b&&a>c) {
		printf("%d is grater",a);
	}
	else if(b>c){
		printf("%d is grater",b);
	}
	else{
		printf("%d is grater",c);
	}
	printf("The smallest number is ");
  if (a<b&&a<c) {
		printf("%d is grater",a);
	}
	else if(b<c){
		printf("%d is grater",b);
	}
	else{
		printf("%d is grater",c);
	}
}
