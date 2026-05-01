#include<stdio.h>

int main()
{
    int a,b,c;
	
	printf("enter value a:");
	scanf("%d",&a);
	
    printf("enter value b:");
	scanf("%d",&b);

    printf("enter value c:");
	scanf("%d",&c);
	
	if(a<c)
	{
		if(a<c)
		{
			printf("minimum num is %d",a);
		}
		else
		{
			printf("minimum num is %d",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("minimum num is %d",b);
		}
		else
		{
			printf("minimum num is %d",c);
		}
	}
}