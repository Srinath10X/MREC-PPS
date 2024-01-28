#include <stdio.h>
#include <math.h>

void main(){
	float a,b,c,d,r1,r2,real,img;
	printf("enter a,b,c values for quadratic equation");
	scanf("%f %f %f");
	d=b*b-4*a*c;
	if(d>0){
		r1=(-b+sqrt(d))/2;
		r1=(-b-sqrt(d))/2;
		printf("Roots are distinct");
		printf("The roots are %f %f",r1,r2);
	}
	else if (d==0){
		r1=r2=-b/(2*a);
		printf("Roots are equal");
		printf("The roots are : %f %f",r1,r2);
	}
	else{
		real=(-b/(2*a));
		img=sqrt(-d)/(2*a);
		printf("Roots are imaginary");
		printf("Roots are : %f+%f %f-%fi",real,img,real,img);
	}
}
