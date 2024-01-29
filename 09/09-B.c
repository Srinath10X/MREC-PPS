#include <stdio.h>

void del(char s[],int a,int b){
	int i;
	for(i=a-1;s[i]!='\0';i++){
		s[i]=s[a+b-1];
		a++;
	}
	printf("The new string is : %s ",s);
}

void main(){
	int n,pos;
	char a[10];
	printf("Enter the string : ");
	scanf("%s",&a);
	printf("Enter the position : ");
	scanf("%d",&pos);
	printf("Enter the no of character to delete : ");
	scanf("%d",&n);
	del(a,pos,n);
}
