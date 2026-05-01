#include<stdio.h>

int main()
{
	int a;
	
    printf("enter first num:");
    scanf("%d",&a);
    
    
    
    if(a<0)
    {
    	printf("num is nagetive ");
	}
	else if(a>0)
	{
		printf("num is positive ");
	}
	else
	{
		printf("num is nuetral ");
	}
}