#pragma once

struct Student
{
	char name[100];
	int age = 0;
	int course = 0;
	int marks[100];
	int count_marks = 0;
	double average = 0;
};

double getAverageMark(Student& s);

void setStudent(Student& s);

void getStudent(Student s, bool detailed = false);
