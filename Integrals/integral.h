#ifndef _INTEGRAL_H_
#define _INTEGRAL_H_

#include <iostream>
#include <math.h>

using namespace std;

void swap(double *a, double *b);

double f1(double x);

double max(double a, double b);
double int_up(double a, double b, double (*f)(double), int n);

double min(double a, double b);
double int_down(double a, double b, double (*f)(double), int n);

double int_mean(double a, double b, double (*f)(double), int n);

double int_trapezoid(double a, double b, double (*f)(double), int n);

double int_simpson(double a, double b, double (*f)(double), int n);
#endif