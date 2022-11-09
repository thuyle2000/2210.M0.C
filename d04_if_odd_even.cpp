#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int n;
    printf(" vui long nhap so nguyen bat ky: ");
    scanf("%d", &n);

    // kiem tra n la so chan hay le
    if (n % 2 == 0)
    {
        printf("[%d] la so chan ! \n", n);
    }
    else
    {
        printf("[%d] la so le ! \n", n);
    }
}