#include <stdio.h>
#include <stdlib.h>

// demo vong lap FOR: su dung phep toan [,] de mo rong khoi khoi tao va cap nhat bien dem
int main()
{
    system("cls");

    for (int i = 1, j=5; i <= 5; i++, j--)
    {
        printf("\t %2d + %2d = %3d \n", i, j, i+j);
    }

    int max;
    printf("\n >> nhap so lan thuc hien phep cong: ");
    scanf("%d", &max);
    for (int i = 1, j=max; i <= max; i++, j--)
    {
        printf("\t %2d + %2d = %3d \n", i, j, i+j);
    }    

}