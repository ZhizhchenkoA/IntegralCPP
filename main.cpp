#include "integral.h"


void swap(double *a, double *b){
    double c = *a;
    *a = *b;
    *b = c;
    return;
}

int main() {
    double a, b, eps;
    cout << "Введите границы интервала интегрирования" << endl;
    cin >> a >> b;
    cout << "Введите точность" << endl;
    cin >> eps;
    cout << endl;
    
    int N = 100; // начальное количество разбиений
    int i = 0; // количество итераций 
    double F_i1, F_i2; // текущее разбиение F_i и следующее разбиение F_{i+1}

    cout << "f(x) = sin(x) * sin(2x) * sin(3x)" << endl;
    cout << "Введённое значение точности " << eps <<endl;
    cout << "Начальное количество разбиений: " << N << endl;
    cout << "Интервал интегрирования: от " << a << " до " << b << endl << endl;


    F_i1 = int_trapezoid(a, b, f1, N);
    N *= 2;
    F_i2 = int_trapezoid(a, b, f1, N);
    
    while (abs(F_i1 - F_i2) > eps){
        swap(F_i1, F_i2);
        N *= 2;
        F_i2 = int_trapezoid(a, b, f1, N);
        i++;
    }

    cout << "Значение интеграла: " << F_i1 << endl;
    cout << "Достигнутая точность: " << F_i1 - F_i2 << endl;
    cout << "Количество разбиений: " << N << endl;
    cout << "Количество итераций: " << i << endl;

    return 0;
}