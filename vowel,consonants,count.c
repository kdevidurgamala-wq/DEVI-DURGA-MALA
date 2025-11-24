#include<stdio.h>
int main()
{
	char a[100];
	int i,l=0,u=0,v=0,digit=0,space=0,c=0,d,s;
	printf("\n enter line of string");
	gets(a);
	{
		if(a[i]>=65&&a[i]<=90)
		{
			u++;
		}
		if(a[i]>=97&&a[i]<=122)
		{
			l++;
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		a[i]=tolower(a[i]);
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			v++;
		}
		else if(a[i]>='0'&&a[i]<='9')
		{
			d++;
		}
		else if(a[i]==' ')
		{
			s++;
		}
		else
		{
			c++;
		}
	}
	printf("\n upper:%d,lower :\n%d,vowels:\n%d,conso:\n%d,digit:\n%d,space:\n%d",u,l,v,c,d,s);
	return 0;
}
