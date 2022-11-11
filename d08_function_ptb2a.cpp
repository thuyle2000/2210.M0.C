#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// demo giai phuong tinh bac 2, dang thuc ax2+ bx+c = 0

int giaiPT2(int a, int b, int c, double *x1, double *x2); // khai bao ham
int main()
{
    system("cls");
    int a, b, c;
    double x = 0, y = 0;

    printf(" >> Chuong trinh tinh nghiem cua PT bac 2 : ax2+bc+c=0 \n");
    printf(" >> nhap he so a: ");
    scanf("%d", &a);
    printf(" >> nhap he so b: ");
    scanf("%d", &b);
    printf(" >> nhap he so c: ");
    scanf("%d", &c);

    int kq = giaiPT2(a, b, c, &x, &y);
    switch (kq)
    {
    case -1:
        printf(" >> PT vo nghiem !!! \n");
        break;
    case 0:
        printf(" >> PT co nghiem kep : ");
        printf(" x1 = x2 = %.2f \n", x);
        break;
    case 1:
        printf(" >> PT co 2 nghiem phan biet : ");
        printf(" x1 = %.2f,  x2 = %.2f \n", x, y);
        break;
    default:
        break;
    }
}

/*
    Dinh nghia ham giai phuong trinh bac 2: ax2 + bx + c = 0
    ten ham : giaiPT2
    gia tri tra ve : so nguyen int:
                     -1 : pt vo nghiem
                      0 : pt co nghiem kep
                      1 : pt co 2 nghiem phan biet x1, x2
    tham so : co 3 tham so nguyen n (a, b, c)
*/
int giaiPT2(int a, int b, int c, double *x1, double *x2)
{
    int r = 1;
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        return -1;
    }
    else if (delta == 0)
    {
       *x1 = *x2 = -b / (2.0 * a);
        return 0;
    }
    else
    {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 1;
    }
    return r;
}