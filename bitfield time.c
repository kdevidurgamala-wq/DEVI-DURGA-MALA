#include<stdio.h>
struct demo
{
  unsigned	int a:5;
  unsigned  int b:6;
  unsigned	int c:6 
};
int main()
{
	struct demo v;
	v.a=17;
	v.b=22;
	v.c=35;
	printf("\n %d \n%d \n%d",v.a,v.b,v.c);
	return 0;
}
