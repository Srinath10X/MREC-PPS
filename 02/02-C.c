#include <stdio.h>

void main(){
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	if((ch>="a"&&ch<="z")||(ch>="A"&&ch<="Z")){
		printf("Entered character is an Alphabet");
	}
	else if(ch>="1"&&ch<="9"){
		printf("Entered character is a number");
	}
	else{
		printf("Entered character is a special character");
	}
}
