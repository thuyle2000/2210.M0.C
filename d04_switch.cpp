#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    char level;
    int bonus;

    printf("vui long nhap bac luong [a,b,c,d]:");
    level = getchar();

    // phan loai bac luong de tinh thuong
    switch (level)
    {
    case 'a':
    case 'A':
        bonus = 100;
        break;
    case 'b':
    case 'B':
        bonus = 200;
        break;

    case 'c':
    case 'C':
        bonus = 500;
        break;

    case 'd':
    case 'D':
        bonus = 1000;
        break;

    default:
        bonus = 50;
        break;
    }

    printf("Bac luong [%c] => Thuong =[%d] \n", level, bonus);
}