#include<stdio.h>

int main()
{
	int x,y,ans;
	
	printf("enter x value:");
	scanf("%d",&x);
	
	printf("enter y value:");
	scanf("%d",&y);
	
	ans = x*x*x+(3*(x*x)*y)+(3*x*x*y*y)+y*y*y;
	
	printf("ans is:%d",ans);
}