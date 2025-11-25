#include<stdio.h>
int main()
{
	int units;
	float amount,charges,total_amount;
	printf("enter no of units:");
	scanf("%d",&units);
	if(units<=50)
	{
		amount=units*2.50;
		charges=25;
	}
	else if(units<=100)
	{
		amount=units*3.000;
		charges=50;
	}
	else if(units<=200)
	{
		amount=units*3.50;
		charges=75;
	}
	else if(units<=300)
	{
		amount=units*4.00;
		charges=100;
	
	}
	else if(units<=400)
	{
		amount=units*4.50;
		charges=125;
    }
    else if(units<=500)
    {
    	amount=units*5.000;
    	charges=150;
	}
	total_amount =amount+charges;
	printf("\n the electricity bill %2f",total_amount);
    
}
