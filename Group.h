#pragma once
#include "Student.h"

struct Group
{
	char name[50];
	Student students[50];
	int size = 0;
};

void getGroup(Group g);

void setGroup(Group& g);