#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <cblas.h>
#include <lapacke.h>


void test_func(void);
void printvec(double * vec, int length, char *name);
void printmat(double * vec, int nolines, int nocols, char *name, CBLAS_LAYOUT layout);
double *A3(int n, CBLAS_LAYOUT layout);
double *A9(double a, double b, int n, CBLAS_LAYOUT layout);
double *AMn(int n, CBLAS_LAYOUT layout);
double *A1(void);
double *randsym (int n);
double *randunitvec (int n);
double mean (double *sample, int noelts);
double std (double *sample, int noelts, double mval);
