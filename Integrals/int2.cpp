#include "integral.h"

double max(double a, double b){
    return (a > b) ? a : b;
}
// метод верхних прямоугольников

double int_up(double a, double b, double (*f)(double), int n){
    if (a > b)
        swap(a, b);
    double h = (b - a) / (double) (n);
    double F = 0;
    for (double x_i = a; x_i + h <= b; x_i += h)
        F += h * max(f(x_i), f(x_i + h));
    return F;
}