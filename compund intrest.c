#include<stdio.h>
int main()
{
	double p,r,t,a,ci;
	printf("enter the value:");
	scanf("%lf %lf %lf",&p,&r,&t);
	a=p*pow((1+r/100),t);
	ci=a-p;
	printf("%.2lf",ci);
	return 0;
	
}
