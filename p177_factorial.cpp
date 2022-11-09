#include <stdio.h>
#include <stdlib.h>

// chuong trinh tinh giai thua cua so nguyen N [1-20]
// n! = 1 * 2 * 3 * 4 ... * n.
// luu y: 1!= 0! = 1
// vi du:  4! = 1*2*3*4

int main()
{
    system("cls");

    int n;
    while (1==1)
    {
        printf(" >> nhap so nguyen N [1-20]: ");
        scanf("%d", &n);
        if(n<1 || n>20){
            printf(" >> Gia tri ko hop le, vui long nhap lai !\n" );
            continue;
        }
        break;
    }
    
    double r=1;
    for (int i = 1; i <=n; i++)
    {
        r = r*i;
    }
    printf(" %d! = %.0f \n", n, r);
}