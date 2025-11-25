#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i,len=0;
	printf("\n enter any string");
	gets(a);
	printf("enter any string");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;b[i]!='\0';len++,i++)
	{
		a[len]=b[i];
	}
	printf("\n after concatinate %s",a);
	return 0;
}
