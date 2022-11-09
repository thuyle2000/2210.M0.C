#include <stdio.h>
#include <stdlib.h>

// demo cach viet 2 vong lap FOR long nhau
int main()
{
    system("cls");

    printf("\n cach 1: \n");
    // in hinh vuong 5x5 ngoi sao - ko co vong lap
    printf("* * * * * \n");
    printf("* * * * * \n");
    printf("* * * * * \n");
    printf("* * * * * \n");
    printf("* * * * * \n");

    printf("\n cach 2: \n");
    // in hinh vuong 5x5 ngoi sao - su dung 1 vong lap
    for (int i = 0; i < 5; i++)
    {
        printf("* * * * * \n");
    }

    printf("\n cach 3: \n");
    // in hinh vuong nxn ngoi sao - su dung 2 vong lap long vao nhau
    printf(" >> nhap kich thuoc hinh vuong: ");
    int n;
    scanf("%d", &n);
    for (int dong = 0; dong < n; dong++)
    {
        for (int  cot = 0; cot < n; cot++)
        {
            printf("* ");
        }
         printf("\n");
    }
    
   
}