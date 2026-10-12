#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#define M_PI            3.14159265358979323846
#include <stdio.h>
#include <windows.h> 
#include <math.h> 

int z1()
{
    long double gr, gr1, gr2, gr3;
    long double rad, rad_g1, rad_g2, rad_g3;
    long double result, result1, result2, result3;

    gr1 = 30.0;
    gr2 = 60.0;
    gr3 = 90.0;

    printf("Программа вычисления тригонометрической функции sin заданного в градусах угла.\nВведите значение: ");
    scanf("%Lf", &gr);

    // ПРОВЕРКА
    rad = gr * M_PI / 180.0;
    result = sinl(rad);
    printf("Результат sin(%.6Lf) равен: %.6Lf\n\n", gr, result);

    rad_g1 = gr1 * M_PI / 180.0;
    result1 = sinl(rad_g1);

    rad_g2 = gr2 * M_PI / 180.0;
    result2 = sinl(rad_g2);

    rad_g3 = gr3 * M_PI / 180.0;
    result3 = sinl(rad_g3);

    printf("ПРОВЕРКА sin(%.6Lf) равен: %.6Lf\n", gr1, result1);
    printf("ПРОВЕРКА sin(%.6Lf) равен: %.6Lf\n", gr2, result2);
    printf("ПРОВЕРКА sin(%.6Lf) равен: %.6Lf\n", gr3, result3);
    return 0;
}

int z2()
{
    double x;
    const double p = 3.0;
    double a, b, y;

    printf("Введите x: ");
    scanf("%lf", &x);

    a = sqrt(p * x);
    b = p * x * x + sqrt(a);
    y = pow(log(b * b), 3) + a * x;

    printf("x = %.1f\n", x);
    printf("y = %.1f\n", y);

    return 0;
}

int z3()
{
    SetConsoleOutputCP(65001);
    const long double k = 8.2;
    long double x, a, b, y;
    printf("Программа расчета математической функции \n y = ln^3(a) + e^(-x)\nb = корень из модуля x\na = b^4 + k^3\nВведите значение параметра x: ");
    scanf("%Lf", &x);

    b = sqrtl(fabsl(x));               
    a = powl(b, 4) + powl(k, 3);       
    y = powl(logl(a), 3) + expl(-x);   
    printf("\nРЕЗУЛЬТАТ:\nx = %.2Lf\nb = %.2Lf\na = %.2Lf\ny = %.2Lf\n", x, b, a, y);

    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    int usl_a = (A % 2 == 0) ^ (B % 2 == 0); 
    int usl_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0); 
    printf("\n3 ЗАДАНИЕ:\nа) Только одно из чисел A(a) и B(b) четное:\nУсловие выполнено (1 - да, 0 - нет): %d\nОстаток от деления A на 2 равен: %d, остаток B на 2 равен: %d\n\n", usl_a, A % 2, B % 2);

    printf("б) Каждое из чисел A(a), B(b), C(y) кратно трем:\nУсловие выполнено (1 - да, 0 - нет): %d\nПодтверждение остатков от деления на 3: A = %d, для B = %d, для C = %d\n", usl_b, A % 3, B % 3, C % 3);
    return 0;
}

int main()
{
    SetConsoleOutputCP(65001);
	z1();
    z2();
    z3();
	return 0;
}