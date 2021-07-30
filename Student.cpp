#include <iostream>
#include "Student.h"


double getAverageMark(Student& s)
{
	double average = 0;

	for (int i = 0; i < s.count_marks; i++)
	{
		average += s.marks[i];
	}
	average /= s.count_marks;

	return average;

}

void setStudent(Student& s)
{
	printf("Set name: ");

	do
		gets_s(s.name, 100);

	while (s.name[0] == '\n' || s.name[0] == '\0');

	printf("Set age: ");
	scanf_s("%i", &s.age);
	printf("Set number of marks: ");
	scanf_s("%i", &s.count_marks);
	printf("Set marks: ");
	for (int i = 0; i < s.count_marks; i++)
	{
		scanf_s("%i", &s.marks[i]);
	}
}

void getStudent(Student s, bool detailed)
{
	printf("\n");
	printf("Student: %s, Age: %i, Number of marks: %i\n", s.name, s.age, s.count_marks);

	if (detailed)
	{
		printf("Marks: ");
		for (int i = 0; i < s.count_marks; i++)
		{
			printf("%i ", s.marks[i]);
		}
		printf("\nAverage point: ");
		std::cout << getAverageMark(s);
		printf("\n\n");
	}
}
