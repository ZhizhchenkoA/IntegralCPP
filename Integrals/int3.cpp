#include "integral.h"

// метод средних прямоугольников

double int_mean(double a, double b, double (*f)(double), int n){
    if (a > b)
        swap(a, b);
    double h = (b - a) / (double) (n);
    double F = 0;
    for (double x_i = a; x_i + h <= b; x_i += h)
        F += h * (f(x_i + h / 2.0f));
    return F;
}

