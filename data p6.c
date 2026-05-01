#include<stdio.h>

int main()
{
	int x,y,ans;
	
	printf("enter x value:");
	scanf("%d",&x);
	
	printf("enter y value:");
	scanf("%d",&y);
	
	ans = x*x+(2*x*y)+y*y;
	
	printf("ans is:%d",ans);
}