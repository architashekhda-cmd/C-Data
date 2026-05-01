#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter first num:");
	scanf("%d",&a);
	
	printf("enter sacond num:");
	scanf("%d",&b);
	
	printf("enter third num:");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a<c)
		{
			printf("maximum num is %d",a);
		}
		else
		{
			printf("maximum num is %d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("maximum num is %d",b);
		}
		else
		{
			printf("maximum num is %d",c);
		}
	}
}