
#include "Lab09.h"
#include <stdio.h>
#include <math.h>

// �� ������ ���� ��������� ��� - ��� � ��� ������
// �������

// 0 0 0 0
void gen_Binary32(int* vector, int level)
{
	if (level != 3)								// ������� ����� �������� - �� ������� �������
	{
		int frozen = 4;							// ��� ��� �� ���������� ������� ������� �������������
		if (level != 1)
		{
			while (vector[frozen - 1] != 1)
				frozen--;
		}
		else
			frozen = 0;

		for (; frozen < 4; frozen++) {
			vector[frozen] = 1;
			gen_Binary32(vector, ++level);
		}
		gen_Binary32(vector, ++level);
	}
	else
		print(vector);
}

void print(int* vector) {
	printf("\n");
	for (int i = 0; i < 4; i++)
		printf(" %d ", vector[i]);
}