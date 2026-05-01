#include<stdio.h>

int main()
{
	int a;
	
	printf("enter your choice:");
	scanf("%d",&a);
	
	switch(a)
	{
		case 'a':
			printf("Excellent");
			break;
		case 'b':
			printf("Average");
			break;
		default:
			printf("invalid choice");
	}
}