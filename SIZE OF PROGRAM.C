#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[20];
	float marks;
	char grade;
};
int main()
{
	struct student s1;
	s1.roll=101;
	strcpy(s1.name,"Nishi");
	s1.marks=98.7;
	s1.grade='O';
	printf("Student roll number=%d\nStudent name=%s\nStudent marks=%.2f\nStudent grade=%c",s1.roll,s1.name,s1.marks,s1.grade);
	printf("\nsize of s1=%d",sizeof(s1));
	return 0;
}
