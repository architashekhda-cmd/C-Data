#include<stdio.h>

int main()
{
	int num;
	
	printf("enter num:");
    scanf("%d",&num);
    
   // if(num%2==0)
    
	if((num/2)*2==num)
	{
    	printf("%d num is even",num);
	}
	else
	{
		printf("%d num is odd",num);
	}
}