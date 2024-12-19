#ifndef _VECTORS_H
#define _VECTORS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct vector3d {
    double x, y, z;
};


double sqr(double x);
double norm(vector3d vec);

int sign(double);
int compare(const void *vec1, const void *vec2);

#endif