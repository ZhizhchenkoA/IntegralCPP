#include "equations.h"

int main() {
    double a, b, c;
    FILE *fp = fopen("input.txt", "r");
    equation_quad eq;
    solutions sol;

    while (fscanf(fp, "%lf%lf%lf", &a, &b, &c) == 3){
        eq.a = a;
        eq.b = b;
        eq.c = c;
        sol = solve(&eq);
        if (!sol.is_real)
            printf("Нет решений в действительных числах\n");
        else if (sol.x1 == sol.x2)
            printf("x1 = %lf\n", sol.x1);
        else    
            printf("x1 = %lf, x2 = %lf\n", sol.x1, sol.x2);
    }
    fclose(fp);
    return 0;
}