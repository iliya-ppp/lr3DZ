#include <stdio.h>
#include <locale.h>
#include <math.h>

void task3()
{
    setlocale(LC_ALL, "RUS");
    float a;
    float b;
    float c;

    puts("¬ведите длину первого катета:");
    scanf("%f", &a);

    puts("¬ведите длину второго катета:");
    scanf("%f", &b);

    c = sqrt(a * a + b * b);

    printf("√ипотенуза пр€моугольного треугольника = %.2f\n", c);
}

int main()
{

    task3();
}
