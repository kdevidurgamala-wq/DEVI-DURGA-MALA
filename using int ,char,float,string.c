#include<stdio.h>
int main()
{
	char name[20];
	int age;
	float weight;
	char gender;
	printf("\n enter name:");
	scanf("%s",&name);
	printf("\n enter age:");
	scanf("%d",&age);
	printf("\n enter weight:");
	scanf("%f",&weight);
	printf("\n enter gender:");
	scanf("%c",&gender);
	printf("\n%s\n%d\n%f\n%c",name,age,weight,gender);
}
