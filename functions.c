
#include "Lab09.h"

void swap(int* l, int* r) {
    if (*l != *r) {
        *l ^= *r;
        *r ^= *l;
        *l ^= *r;
    }
}

void reverse(int* begin, int* end) {
    if (begin < end - 1) {
        swap(begin, end - 1);
        reverse(++begin, --end);
    }
}

int gen_permutation(int* begin, int* end) {
    int* next = end;

    if (begin == end || begin == --next) {
        return 0;
    }

    while (1) {
        int* next1 = next;
        if (*--next < *next1) {
            int* mid = end;
            do {
                --mid;
            } while (*next >= *mid);

            swap(next, mid);
            reverse(next1, end);
            return 1;
        }

        if (next == begin) {
            reverse(begin, end);
            return 0;
        }
    }
}