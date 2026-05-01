#include<stdio.h>

main()
{
	int a;
	
	printf("enter your choice:");
	scanf("%d",&a);
	
	(a>0) 	
		?printf("number is positive") 
		:printf("number is negative");
}