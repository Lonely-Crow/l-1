#include "stdlib.h"
#include <iostream>


int main()
{
	setlocale(0, "");
	int n, j, i, min = 10000, max = -1000000;
	scanf_s("%d", &j);
	int* a = NULL;
	a = (int*)malloc(j * sizeof(int));

	printf("массив :");
	for (i = 0; i < j; i++)
	{
		a[i] = rand();
		printf(" %d ", a[i]);
	}
	for (i = 0; i < j; i++)
	{
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}
	n = max - min;
	printf(" \n  Разница между максимальным и минимальным элементом массива =  %d ", n);
	getchar();
	getchar();
	return 0;
}

