 #include <stdio.h>

typedef struct
{
	char name[100];
	float score;
} Student;

char calculateGrade(Student student)
{
	if (student.score >= 80)
	{
		return 'A';
	}
	if (student.score >= 70)
	{
		return 'B';
	}
	if (student.score >= 60)
	{
		return 'C';
	}
	if (student.score >= 50)
	{
		return 'D';
	}
	return 'F';
}

int main(void)
{
	Student student;

	printf("Enter student name: ");
	scanf(" %99[^\n]", student.name);
	printf("Enter score: ");
	scanf("%f\n", &student.score);

	printf("Name: %s\n", student.name);
	printf("Grade: %c\n", calculateGrade(student));

	return 0;
}
