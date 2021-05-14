
// Написать программу, выводящую на экран все двоичные вектора длины 32, имеющие заданный вес n <= 4.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "Lab09.h"

int main() {
    int counter = 1;

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

    printf("\n  %d.          ", counter);
    for (int j = 0; j < n; j++)
        printf("%d ", vector[j]);

    if (n != max)
    {
        for (int i = 0; i < max; i++)
        {
            vector[n - 1 - i] = 1;
            do {
                counter++;
                printf("\n  %d.          ", counter);
                for (int j = 0; j < n; j++)
                    printf("%d ", vector[j]);
            } while (gen_permutation(vector, vector + n));
        }
    }
    else
    {
        printf("\n\t");
        for (int j = 0; j < n; j++)
        {
            vector[j] = 1;
            printf("%d ", vector[j]);
        }
    }

    return 0;
}