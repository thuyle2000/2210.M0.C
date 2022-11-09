#include <stdio.h>
#include <stdlib.h>
// demo lenh break trong vong lap
int main()
{
    system("cls");

    int n;
    do
    {
        printf(">> vui long nhap so nguyen N [2-20]: ");
        scanf("%d", &n);
        if(n>=2 && n<=20){
            break;  //ket thuc vong lap - neu nhap dung
        }
        printf("\t >> gia tri ko hop le, vui long nhap lai !\n");
    } while (1==1);

    printf("\n *** Bang cuu chuong %d *** \n", n);
    for (int i = 1; i <=10; i++)
    {
        printf("%3d * %2d = %3d \n", n, i, n*i);
    }
    
}