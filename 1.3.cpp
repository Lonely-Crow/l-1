#include "stdafx.h"
#include<stdio.h>
#include<time.h>
#include<iostream>
#include <windows.h>
int main()
{
	SetConsoleOutputCP(1251);


	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	int i;
	struct student
	{
		char famil[20];
		char name[20];
		int Nomzach;
		int age;
	} stud[3];

	for (i = 0; i < 3; i++)
	{
		printf("surname\n");
		scanf("%20s", stud[i].famil);
		printf("name %s\n", stud[i].famil); scanf("%20s", stud[i].name);
		_flushall();
		printf("age %s %s\n", stud[i].famil, stud[i].name);
		scanf("%d", &stud[i].age);
		printf(" number record book %s %s\n", stud[i].famil, stud[i].name);
		scanf("%d", &stud[i].Nomzach);
		system("cls");
	}
	for (i = 0; i < 3; i++)
	{
		printf("student %s %s %d age, number record book %d \n", stud[i].famil, stud[i].name, stud[i].age, stud[i].Nomzach);
	}

	char str[20];
	int K = 0;
	printf("\n surname:");
	scanf("%20s", str);
	for (i = 0; i < 3; i++) {
		if (strcmp(str, stud[i].famil) == 0) {
			K = 1;
			printf("student: \n student %s %s %d age, number record book %d \n", stud[i].famil, stud[i].name, stud[i].age, stud[i].Nomzach);
		}
	}
	if (K == 0)
		printf("not.");
	system("pause");
}
