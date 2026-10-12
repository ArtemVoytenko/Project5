#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double x, y, z, a;

    printf("Введите x: ");
    scanf("%lf", &x);

    printf("Введите y: ");
    scanf("%lf", &y);

    printf("Введите z: ");
    scanf("%lf", &z);

    a = log(pow(y, -sqrt(fabs(x)))) * (x - y / 2)
        + pow(sin(atan(z)), 2);

    printf("x = %.3f\n", x);
    printf("y = %.5f\n", y);
    printf("z = %.1f\n", z);
    printf("Результат alpha = %.3f\n", a);

    return 0;
}
