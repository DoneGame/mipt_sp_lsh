typedef enum __NUM_ROOTS {
    INF_ROOTS = -1,
    NO_ROOTS  =  0,
    ONE_ROOT  =  1,
    TWO_ROOTS =  2,
} NUM_ROOTS;

void      GetCoefs       (double *a, double *b, double *c);
NUM_ROOTS SolveEquation  (double a, double b, double c, double *x1, double *x2);
void      PrintResults   (NUM_ROOTS n_roots, double x1, double x2);
