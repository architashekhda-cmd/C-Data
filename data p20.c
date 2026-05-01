#include<stdio.h>

int main()
{
	int a,b,c,d,e,f;
	
	printf("enter value of a:");
	scanf("%d",&a);
	
	printf("enter value of b:");
	scanf("%d",&b);
	
	printf("enter value of c:");
	scanf("%d",&c);
	
	printf("enter value of d:");
	scanf("%d",&d);

    printf("enter value of e:");
	scanf("%d",&e);
	
	printf("enter value of f:");
	scanf("%d",&f);
	
	if(a<b)
	{
		if(a<e)
		{
			if(a<f)
			{
				printf("a is minimum");
			}
			else
			{
				printf("f is minimum");
			}
		}
		else
		{
			printf("e is minimum");
		}
	}
	else if(b<e)
	{
		if(b<f)
		{
		    if(e<f)
			{
				printf("e is minimum");
			}
			else
			{
				printf("f is minimum");
			}	
		}
		else
		{
			printf("b is minimum");
		}
		
	}
	else if(c<e)
	{
		if(c<f)
		{
			if(e<f)
			{
				printf("e is minimum");
			}
			else
			{
				printf("f is minimum");
			}
		}
		else
		{
			printf("c is minimum");
		}
	}
	else
	{
		if(d<e)
		{
			if(d<f)
			{
				if(e<f)
				{
					printf("e is minimum");
				}
				else
				{
					printf("f is minimum");
				}
			}
			else
			{
				printf("d is minimum");
			}
		}
		else
		{
			printf("e is minimum");
		}
	}
}