#include "vectors.h"

int sign(double x){
    return (x < 0.0) ? -1 : 1;
}
int compare(const void *vec1, const void *vec2){
    vector3d *vec1_p = *(vector3d**) vec1; 
    vector3d *vec2_p = *(vector3d**) vec2;
    return sign(norm(*vec1_p) - norm(*vec2_p));
}

