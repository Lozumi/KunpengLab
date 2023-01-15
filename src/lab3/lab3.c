// KunpengLab Lab3
#include <stdio.h>
#include <math.h>

double fun(double *a, double *b);

int main(int argc, char *argv[])
{
    double a = *argv[1] - '0';
    double b = *argv[2] - '0';
    double y;
    y = fun(&a, &b);
    printf("y=%.2f\n", y);
    return 0;
}

double fun(double *a, double *b)
{
    return sqrt(*a) + sqrt(*b);
}