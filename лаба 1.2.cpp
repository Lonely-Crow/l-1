
#include <iostream>
#include "stdlib.h"

int main()
{
	setlocale(0, "");
	int  j, i, sum=0;
	int m, n=0;
	int** arr=NULL;
	printf("Введите количество строк и  столбцов: ");
	scanf_s("%d", &m);
	
	arr = (int**)malloc(m * sizeof(int*));
	for (int i = 0; i < m; i++) {
		arr[i] = (int*)malloc(m * sizeof(int));
	}

	printf("массив : \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 100;
			printf(" %d ", arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			sum = sum + arr[i][j];
		}
		printf("Сумма элементов в строке: %d \n ", sum);
		sum = 0;
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i <= j)
				n += arr[i][j];
		}
	}
	printf("Сумма элементов главной диагонали и элементов находящихся выше неё = %d", n);
	getchar();
	getchar();
	return 0;
}
