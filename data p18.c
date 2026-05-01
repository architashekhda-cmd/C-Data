#include<stdio.h>

int main()
{
	float math,eng,sci,ans,total;
	
	printf("enter maths marks:");
	scanf("%f",&math);
	
	printf("enter english marks:");
	scanf("%f",&eng);
	
	printf("enter science marks:");
	scanf("%f",&sci);
	
	total = math+sci+eng;
	ans=(total/300)*100;
	
	printf("total marks is: %2f ",total);
	printf("\naverage is: %2f",ans);
	
}