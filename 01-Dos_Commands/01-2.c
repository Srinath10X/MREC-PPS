#include <stdio.h>

void main(){
	int a,b;
	char c;
	printf("Enter + for addition = \n Enter - for substraction= \n Enter * for multiplication= \n Enter / for division= \n Enter % for modulo= \n");
	printf("Enter your choice = ");
	scanf("%c",&c);
	printf("Enter two numbers = ");
	scanf("%d %d",&a,&b);
	switch (c) {
		case "+":
		  printf("addition = %d",a+b);
		break;
		case "-":
		  printf("substraction = %d",a-b);
		break;
		case "*":
		  printf("multiplication = %d",a*b);
		break;
		case "/":
		  printf("division = %f",a/b);
		break;
		case "%":
		  printf("multiplication = %d",a%b);
		break;
	}
}
