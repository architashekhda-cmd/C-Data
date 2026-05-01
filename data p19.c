#include<stdio.h>

int main()
{
	
	int a,b,c,d;
	
	printf("enter value of a:");
	scanf("%d",&a);
	
	printf("enter value of b:");
	scanf("%d",&b);
	
	printf("enter value of c:");
	scanf("%d",&c);
	
	printf("enter value of d:");
	scanf("%d",&d);
	
	if(a<b)
	{
		if(a<d)
		{
			printf("a is minimum");
		}
		else if(a<c)
		{
			printf("c is minimum");
		}
		else
		{
			printf("d is minimum");
		}
	}
	else
	{
		if(b<c)
		{
			printf("b is minimum");
		}
		else if(c<d)
		{
			printf("c is minimum");
		}
		else
		{
			printf("d is minimum");
		}
	}
}