#include "equations.h"

solutions solve(equation_quad *eq){
    solutions ans = {0, -1, -1};
    double D = eq->b * eq->b - 4 * eq->a * eq->c;
    if (D < 0)
        return ans;
    
    double x1 = (- eq->b + sqrt(D)) / ( 2 * eq->a);
    double x2 = (- eq->b - sqrt(D)) / ( 2 * eq->a);
    ans.x1 = x1;
    ans.x2 = x2;
    ans.is_real = 1;
    return ans;
}