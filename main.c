#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "Lab09.h"

int main() {
    int n = 0;
    printf("\n Input vector length: ");
    if (((scanf("%d", &n)) != 1) || n <= 0)
    {
        printf("\n Input error");
        return -2;
    }

    int max = 0;
    printf(" Input max vector mass: ");
    if (((scanf("%d", &max)) != 1) || max > n)
    {
        printf("\n Input error");
        return -2;
    }

    int* vector = (int*)calloc(n, sizeof(int) * n);
    if (!vector)
    {
        printf("\t Memory allocation error");
        return -2;
    }

    printf("\n Result:");

    gen_permutation(&n, &max, vector);

    return 0;
}