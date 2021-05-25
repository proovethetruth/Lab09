#define _CRT_SECURE_NO_WARNINGS

#include "Lab09.h"

int main()
{
    int* vector = calloc(SIZE, sizeof(int) * SIZE);
    gen_Binary32(vector, 1);
    return 0;
}