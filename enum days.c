#include<stdio.h>
enum days
{
	mon,tue,wed,thurs,fri,sat,sun
	
}d;
int main()
{
   enum days d;
   d=sat;
   printf("\n%d",d);
   return 0;
}

