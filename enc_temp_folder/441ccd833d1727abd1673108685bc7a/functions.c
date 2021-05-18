
#include "Lab09.h"

//[0][0][0][0][0]
//[1][0][0][0][0]

void gen_permutation(int* n, int* max, int* vector) {
	print_vector(vector, n);

	int fixed = -1, moving = 0;
	int count = 0;

	while (count != *max) {
		reset(vector, &count, n);

		while(vector[moving + 1] != 0)				// define the moving one
			moving++;
		
		fixed = moving - 1;							// define fixed (in relation to moving one)
		vector[moving] = 1;							// assert dominance (1)

		for (int i = 0; i < *n - count; i++)
		{
			while (moving < *n)						// moving permutations
			{
				print_vector(vector, n);
				vector[moving] = 0;
				vector[++moving] = 1;
			}
			vector[fixed] = 0;
			vector[++fixed] = 1;
		}
		count++;
	}
	return;
}

void reset(int* vector, int* count, int* n) {
	for (int i = *n-1; vector[i] != 0; i--)			// zero-vector
		vector[i] = 0;
	
	for (int i = 0; i < *count; i++)				// assign 1 where needed
		vector[i] = 1;

	return;
}

void print_vector(int* vector, int *n) {
	static int count = 0;
	count++;
	printf("\n    %d.   ", count);
	for (int i = 0; i < *n; i++)
		printf("[%d]", vector[i]);
}