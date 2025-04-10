#include "dhbw.h"

#include <stdio.h>

void dhbw_print_integer(const char* description, long long v) {
    printf("%s: %lli\n", description, v);
}

void dhbw_print_line(const char* text) {
    printf("%s\n", text);
}

void dhbw_print_float(const char* description, double v) {
    printf("%s: %.2lf\n", description, v);
}

void dhbw_print_bitwise_uint(const char *description, unsigned int v) {
    for (int i = 31; i >= 0; --i) {
        printf("%d", (v >> i) & 1);
    }
    printf(": %s\n", description);
}

void dhbw_print_bitwise_int(const char *description, int v) {
    dhbw_print_bitwise_uint(description, (unsigned int)v);
}