#include<stdio.h>

int main()
{
	float p,r,n,i;
	
	printf("enter p:");
	scanf("%f",&p);
	
	printf("enter r:");
	scanf("%f",&r);
	
	printf("enter n:");
	scanf("%f",&n);
	
	i=(p*r*n)/100;
	
	printf("simple interest is:%.2f",i);
}