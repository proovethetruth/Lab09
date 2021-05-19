#define _CRT_SECURE_NO_WARNINGS

#include "Lab09.h"

int main()
{
    int* vector = calloc(4, sizeof(int) * 4);
    gen_Binary32(vector, 1);
    return 0;
}