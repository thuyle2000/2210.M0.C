#include <stdio.h>
#include <stdlib.h>

// demo cach viet 2 vong lap FOR long nhau
int main()
{
    system("cls");

    printf("\n cach 1: \n");
    // in tam giac ngoi sao - ko co vong lap
    printf("* \n");
    printf("* *  \n");
    printf("* * *  \n");
    printf("* * * *  \n");
    printf("* * * * * \n");

    printf("\n cach 2: \n");
    // in tam giac ngoi sao n dong - su dung 2 vong lap long vao nhau
    printf(" >> nhap so dong tam giac: ");
    int n;
    scanf("%d", &n);
    for (int dong = 1; dong <= n; dong++)
    {
        for (int cot = 1; cot <= dong; cot++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n Thap tam giac so nguyen \n");
    for (int dong = 1; dong <= n; dong++)
    {
        for (int cot = 1; cot <= dong; cot++)
        {
            printf("%2d", cot);
        }
        printf("\n");
    }
}