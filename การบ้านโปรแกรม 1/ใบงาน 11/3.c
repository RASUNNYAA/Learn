#include <stdio.h>

typedef struct
{
	char name[100];
	int age;
} Person;

Person inputPerson(void)
{
	Person person;

	printf("Enter person name: ");
	scanf(" %99[^\n]", person.name);
	printf("Enter age: ");
	scanf("%d", &person.age);

	return person;
}

int main(void)
{
	Person person = inputPerson();

	printf("Name: %s\n", person.name);
	printf("Age: %d\n", person.age);

	return 0;
}
