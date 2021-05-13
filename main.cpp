
#define _CRT_SECURE_NO_WARNINGS
// Написать программу, выводящую на экран все двоичные вектора длины 32,
// имеющие заданный вес n <= 4.

#include <stdio.h>
#include <malloc.h>

// Function to generate all binary strings
void generateAllBinaryStrings(int* length, int* arr, int i, int* n)
{
	if (i == *length) {
		int tmp = 0;
		for (int q = 0; q < *length; q++)
			tmp += arr[q];

		if (tmp == *n)
		{
			printf("\n\t");
			for (int j = 0; j < *length; j++) {
				printf(" %d ", arr[j]);
			}
		}
		return;
	}

	// убрать переборный алгоритм
	// без проверок

	// First assign "0" at ith position
	// and try for all other permutations
	// for remaining positions
	arr[i] = 0;
	generateAllBinaryStrings(length, arr, i + 1, n);
	// And then assign "1" at ith position
	// and try for all other permutations
	// for remaining positions
	arr[i] = 1;
	generateAllBinaryStrings(length, arr, i + 1, n);
}

int main()
{
	int length, n, i = 0;

	printf("\n Input vecor length: ");
	if (scanf("%d", &length) != 1)
	{
		printf("\n Input Error");
		return -1;
	}

	printf(" Input max vector mass: ");
	if (scanf("%d", &n) != 1)
	{
		printf("\n Input Error");
		return -1;
	}

	int* arr = (int*)malloc(length * sizeof(int));

	// Print all binary strings
	printf("\n Result: ");
	generateAllBinaryStrings(&length, arr, i, &n);
	printf("\n");
	return 0;
}
