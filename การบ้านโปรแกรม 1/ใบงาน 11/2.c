#include <stdio.h>

typedef struct
{
	char name[100];
	float salary;
} Employee;

void increaseSalary(Employee *employee, float percentage)
{
	employee->salary += employee->salary * percentage / 100;
}

int main(void)
{
	Employee employee;
	float percentage;

	printf("Enter employee name: ");
	scanf(" %99[^\n]", employee.name);
	printf("Enter salary: ");
	scanf("%f", &employee.salary);
	printf("Enter increase percentage: ");
	scanf("%f", &percentage);

	increaseSalary(&employee, percentage);

	printf("Name: %s\n", employee.name);
	printf("New salary: %.2f\n", employee.salary);

	return 0;
}
