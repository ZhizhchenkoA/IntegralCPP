#include "vectors.h"

int main() {
    int size = 5, i = 0, N = 0;
    double x, y, z;
    vector3d **arr = (vector3d**) calloc(sizeof(vector3d*), size);

    FILE *fp = fopen("input.txt", "r");
    while (fscanf(fp, "%lf%lf%lf", &x, &y, &z) == 3){
        if (N >= size){
            size *= 2;
            arr = (vector3d**) realloc(arr, sizeof(vector3d*) * size);
        }
        vector3d *tmp = (vector3d*) malloc(sizeof(vector3d));
        tmp->x = x;
        tmp->y = y;
        tmp->z = z;
        arr[N] = tmp;
        N++;
    }
    qsort(arr, N, sizeof(vector3d*), compare);

    for (i = 0; i < N; i++)
        printf("%lf %lf %lf\n", arr[i]->x, arr[i]->y, arr[i]->z);
        
    fclose(fp);
    return 0; 
}