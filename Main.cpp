#include <iostream>
#include "Student.h"
#include "Group.h"
using namespace std;



int main()
{
	system("chcp 1251");

	Group gr;
	
	setGroup(gr);

	system("cls");

	getGroup(gr);

	system("pause");
	return 0;
}