#include<stdio.h>

int main()
{
	int salary;
	float hra,da,ta,gross;
	
	printf("enter base salary:");
	scanf("%d",&salary);
	
	printf("enter hra:");
	scanf("%f",&hra);
	
	printf("enter da:");
	scanf("%f",&da);
	
	printf("enter ta:");
	scanf("%f",&ta);
	
	hra = salary*hra/100;
	da = salary*da/100;
	ta = salary*ta/100;
	
	gross = salary+hra+da+ta;
	
	printf("gross salary is %f:",gross);
	
}