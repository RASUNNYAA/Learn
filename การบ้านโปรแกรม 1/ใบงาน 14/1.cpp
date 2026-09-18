#include <stdio.h>

struct Employee
{
    char name[50];
    int id;
};

int main()
{
    struct Employee e;

    printf("Employee Name : ");
    scanf("%s", e.name);

    printf("Employee ID : ");
    scanf("%d", &e.id);

    printf("\nEmployee %s\n", e.name);
    printf("ID : %d\n", e.id);

    return 0;
}
