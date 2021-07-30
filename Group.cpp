#include "Group.h"
#include "Student.h"
#include <iostream>

void getGroup(Group g)
{
	printf("\nGroup name: %s", g.name);
	printf("\nGroup size: %i", g.size);

	for (int i = 0; i < g.size; i++)
	{
		getStudent(g.students[i]);
	}

	printf("\n");
}

void setGroup(Group& g)
{
	printf("Group name: ");
	do
		gets_s(g.name, 50);

	while (g.name[0] == '\n' || g.name[0] == '\0');

	do
	{
		printf("Group size: ");
		scanf_s("%i", &g.size);
	}
	while (g.size < 1 || g.size > 100);

	for (int i = 0; i < g.size; i++)
	{
		std::cout << "\nSTUDENT #" << i + 1 << std::endl;
		setStudent(g.students[i]);
	}
}
