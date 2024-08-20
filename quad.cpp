#include "quad.h"
#include <stdio.h>

int main() {
    double a = 0, b = 0, c = 0;

    printf("# Second power equation solver\n");

    GetCoefs (&a, &b, &c);

    double x1 = 0, x2 = 0;
    NUM_ROOTS n_roots = SolveEquation (a, b, c, &x1, &x2);

    PrintResults (n_roots, x1, x2);

}
