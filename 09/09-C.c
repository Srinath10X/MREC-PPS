#include <stdio.h>
#include <string.h>

int main(){
	char str1[20],str2[20],str3[20];
	int i,j;
	printf("Enter string 1 : ");
	scanf("%s",str1);
	printf("Enter string 2 : ");
	scanf("%s",str2);
	for (i=0; str1[i]!='\0'; i++) {
		for(j=0;str2[j]!='\0';j++){
			if(str1[i]==str2[j]){
				str3[j]=str2[j];
			}
		}
	}
	if(strcmp(str2,str3)==0){
		printf("substring found ");
	}
	else{
		printf("substring not found");
	}
}
