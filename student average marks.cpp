#include <stdio.h>

struct Student
{
    int marks;
};

int main()
{
    struct Student s[100];
    int n, i, total = 0;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input marks of students
    for(i = 0; i < n; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &s[i].marks);

        total = total + s[i].marks;
    }

    // Calculate average
    average = (float)total / n;

    // Display total and average
    printf("Total marks = %d\n", total);
    printf("Average marks = %.2f\n", average);

    return 0;
}
