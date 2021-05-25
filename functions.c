
#include "Lab09.h"
#include <stdio.h>

void gen_Binary32(int* vector, int level, int frozen)
{
	while (frozen < SIZE)
	{
		vector[frozen] = 1;

		if (level != N)
			gen_Binary32(vector, level + 1, frozen + 1);

		printf("\n");
		for (int i = 0; i < SIZE; i++)
			printf(" %d ", vector[i]);

		vector[frozen] = 0;
		frozen++;
	}
}