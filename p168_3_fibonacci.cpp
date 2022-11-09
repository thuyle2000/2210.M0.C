#include <stdio.h>
#include <stdlib.h>

/* ct tinh va in ra day so fibonacci n-phan tu.
   day so fibonacci: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ...
     voi f(1) = f(2) = 1
     va  f(n) = f(n-1) + f(n-2)
*/
int main()
{
    system("cls");
    printf(" *** CT in day so Fibonacci ***\n");
    int n;
    while (1 == 1)
    {
        printf(" >> nhap tong so phan tu [3-20]: ");
        scanf("%d", &n);
        if (n >= 3 && n <= 20)
        {
            break;
        }
        printf(" >> loi: so lieu nhap ko hop le !!! \n");
    }

    int a = 0, b = 0, c = 1;
    printf("\n Day so fibonacci co [%d]-phan tu: \n", n);
    for (int i = 0; i < n; i++)
    {
        a = b;
        b = c;
        printf("%d ", c);
        c = b + a;
    }
}
