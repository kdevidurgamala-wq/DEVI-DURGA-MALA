#include<stdio.h>
#include<string.h>
union employee
{
	int EID;
	char Ename[20];
	float Esalary;
};
int main()
{
	union employee E;
	E.EID=101;
	strcpy(E.Ename,"LAHARI");
	E.Esalary=3000000;
	printf("\n Employee ID=%d\n Employee name= %c\n Employee salary=%f",E.EID,E.Ename,E.Esalary);
	return 0;
}
