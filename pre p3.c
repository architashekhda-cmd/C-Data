#include<stdio.h>

int main()
{
	float fa,sa,ta;
	
	printf("enter fa:");
	scanf("%f",&fa);
	
	printf("enter sa:");
	scanf("%f",&sa);
	
	ta = 180-(fa+sa);
	
	printf("ta is %f:",ta);
}