#include <stdio.h>

struct Student
{
    int roll;
    char name[100];
    float marks;
};

int main()
{
    struct Student s[5];
    float sum = 0, average;
    int i, highest = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        sum += s[i].marks;

        if (s[i].marks > s[highest].marks)
            highest = i;
    }

    average = sum / 5;

    printf("\nStudent Records\n");
    printf("----------------------------------------\n");
    printf("Roll\tName\t\tMarks\n");
    printf("----------------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t%-15s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    printf("----------------------------------------\n");
    printf("Average Marks: %.2f\n", average);

    printf("\nStudent with Highest Marks\n");
    printf("Roll Number: %d\n", s[highest].roll);
    printf("Name: %s\n", s[highest].name);
    printf("Marks: %.2f\n", s[highest].marks);

    return 0;
}
