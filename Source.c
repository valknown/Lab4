#include <stdio.h>
#include <locale.h>

void task1();
void task2();
void task3();

void main() {
    setlocale(LC_ALL, "RUS");
    puts("Задание 1");
    task1();
    puts("Задание 2");
    task2();
    puts("Задание 3");
    task3();
}

void task1() {
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %e\n\n", d);

    puts("Введите char: ");
    scanf_s("%c", &c, 1);
    puts("Введите int: ");
    scanf_s("%d", &i);
    puts("Введите float: ");
    scanf_s("%f", &f);
    puts("Введите double: ");
    scanf_s("%lf", &d);
    printf("c = %c, i = %d, f = %f, d = %e\n\n", c, i, f, d);

    int part1 = (int)f;
    float part2 = f - part1;
    // 1а
    printf("Вещественное число: %f\n", f);
    printf("Целая часть: %d\n", part1);
    printf("Дробная часть: %f\n\n", part2);

    // 1б
    printf("Символ: '%c'\n", c);
    printf("Десятичный код: %d\n", c);
    printf("Шестнадцатеричный код: 0x%X\n\n", c);

    // 1в
    if (i != 0) {
        double res = 1.0 / i;
        printf("%lf\n", res);
    }
    else {
        puts("Ошибка");
    }
}

void task2() {
    int a = 11;
    int b = 3;

    int x;
    float y;
    double z;

    x = a / b;
    y = a / b;
    z = a / b;

    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %lf\n\n", z);

    printf("a / b   = %f\n", (float)a / b);
    printf("a / b  = %lf\n", (double)a / b);
}

void task3() {
    int n;
    scanf_s("%d", &n);
    int n3 = n % 10;
    int n2 = (n / 10) % 10;
    int n1 = n / 100;
    int sum = n3 + n2 + n1;
    int reversen = n3 * 100 + n2 * 10 + n1;
    printf("сумма цифр = %d; число наоборот = %d", sum, reversen);
}