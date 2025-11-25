#include<stdio.h>
int main()
{
	int i=3,j;
	j=(i++)+(++i);
	printf("%d",j);
	return 0;
}
