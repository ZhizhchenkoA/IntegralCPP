#ifndef _EQUATIONS_H
#define _EQUATIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct equation_quad {
    double a, b, c;
};

struct solutions {
    int is_real;
    double x1, x2;
};

solutions solve(equation_quad *eq);

#endif