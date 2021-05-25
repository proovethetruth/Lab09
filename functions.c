
#include "Lab09.h"
#include <stdio.h>

void gen_Binary32(int* vector, int level)
{
	int frozen = SIZE - 1;

	if (vector[frozen] != 1) {
		while ((vector[frozen - 1] != 1) && (frozen != 0))
			frozen--;
	}
	else
		return;

	while (frozen < SIZE)
	{
		vector[frozen] = 1;

		if (level != N)
		{
			gen_Binary32(vector, ++level);
			level -= 1;
		}

		printf("\n");
		for (int i = 0; i < SIZE; i++)
			printf(" %d ", vector[i]);

		vector[frozen] = 0;
		frozen++;
	}
}