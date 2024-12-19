#include "vectors.h"



double sqr(double x){
    return x * x;
}

double norm(vector3d vec){
    return sqrt(sqr(vec.x) + sqr(vec.y) + sqr(vec.z));
}

