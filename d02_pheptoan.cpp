#include <stdio.h>

int main()
{
    int a, b; // khai bao 2 bien bo nho a va b, kieu so nguyen
    a = b = 10; // gan cho a va b = 10

    printf("a = %d, b = %d \n", a, b);
    a++; // a=a+1
    b--; // b=b-1
    printf("\n >> Sau phep toan ++ va --: ");
    printf("a = %d, b = %d \n", a, b);
}