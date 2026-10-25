#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

double Q(double X) {
    if (X < 55.0) {
        return ((X - 55.0) / 2.0) + 20.0;
    }
    else if (fabs(X - 55.0) < 0.0001) {
        return 49.59;
    }
    else if (X <= 75.0) {
        return 4.0 * log(X - 65.0 + 10.0) + 40.0;
    }
    else {
        return 3.0 * sqrt(X - 75.0 + 1.0) + 65.0;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    double X;
    printf("Введите X: ");
    scanf("%lf", &X);

    printf("Q(%.2f) = %.4f\n", X, Q(X));

    return 0;
}
