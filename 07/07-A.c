#include <stdio.h>
#include <string.h>

int main(){
	int i,j,n;
	char str1[10][10],temp[10];
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++){
		scanf("%s",&str1[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if (strcmp(str1[i],str1[i+1])>0) {
				strcpy(temp, str1[i]);
				strcpy(str1[i],str1[i+1]);
				strcpy(str1[i+1],temp);
			}
		}
	}
	printf("The sorted names are : ");
	for (i=0; i<n; i++) {
		printf("%s",str1[i]);
	}
	return 0;
}
