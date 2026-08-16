#include <stdio.h>

struct Salary
{
    float basicpay;
    float da;
    float hra;
    float cca;
};

struct Employee
{
    int empid;
    char empname[100];
    struct Salary salary;
};

int main()
{
    struct Employee e;
    float gross;

    printf("Enter Employee ID: ");
    scanf("%d", &e.empid);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e.empname);

    printf("Enter Basic Pay: ");
    scanf("%f", &e.salary.basicpay);

    printf("Enter DA: ");
    scanf("%f", &e.salary.da);

    printf("Enter HRA: ");
    scanf("%f", &e.salary.hra);

    printf("Enter CCA: ");
    scanf("%f", &e.salary.cca);

    gross = e.salary.basicpay + e.salary.da + e.salary.hra + e.salary.cca;

    printf("\nEmployee Details\n");
    printf("Employee ID: %d\n", e.empid);
    printf("Employee Name: %s\n", e.empname);
    printf("Basic Pay: %.2f\n", e.salary.basicpay);
    printf("DA: %.2f\n", e.salary.da);
    printf("HRA: %.2f\n", e.salary.hra);
    printf("CCA: %.2f\n", e.salary.cca);
    printf("Gross Salary: %.2f\n", gross);

    return 0;
}
