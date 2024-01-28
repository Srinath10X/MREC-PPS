#include <stdio.h>

void main(){
	int a,b,count=0;i,j,primecount=0;
	printf("Enter the range or the limits : ");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		count = 0;
		for(j=2;j<i;j++){
			if(i%j==0){
				count++;
				break;
			}
		}
		if(count==0){
			printf("%d\t",i);
			primecount++;
		}
	}
	printf("The total number of prime numbers in the given limits is : %d",primecount);
}
