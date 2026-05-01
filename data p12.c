#include<stdio.h>

int main()
{
	int age;
	
	printf("enter your age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("your age is perfact to vote %d",age);
	}
	else
	{
		printf("you can't vote %d",age);
	}
}