#include <stdio.h>
int main()
{
    int a, b;

    printf("vui long nhap so thu 1: ");
    scanf("%d", &a);
    printf("vui long nhap so thu 2: ");
    scanf("%d", &b);

    printf("a = %d, b = %d \n", a, b);
    printf(" a + b = %d \n", a + b);
    printf(" a - b = %d \n", a - b);
    printf(" a * b = %d \n", a * b);
    printf(" a / b = %f \n", (float)a / b);
    printf(" a %% b = %d \n", a % b);
}