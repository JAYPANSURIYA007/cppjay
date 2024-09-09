#include <stdio.h>

int main()
{

    float a, b, c;

    printf("please enter your first number\n");

    scanf("%f", &a);

    printf("please enter your second number\n");

    scanf("%f", &b);
    c = a / b;
    printf("%.2f\n", a + b);
    printf("%.2f\n", a - b);
    printf("%.2f\n", a * b);
    printf("%.2f\n", c);
}