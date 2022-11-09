#include <stdio.h>
#include <stdlib.h>

//chuong trinh demo ve lap trinh mang chua cac so nguyen
int main(){
    system("cls");

    //khai bao mang so nguyen a, co 10 phan tu
    int a[10];

    //gan gia tri cho 10 phan tu cua mang a
    for (int i = 0; i < 10; i++)
    {
        // a[i]=100;
        printf("nhap gia tri cho a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    

    //in ra noi dung cua mang a[], va tim ra so lon nhat / so nho nhat
    int min, max, total = 0;
    min = max = a[0];

    printf("\n Noi dung mang a[]: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
        min = (a[i]<min) ? a[i]: min;
        max = (a[i]>max) ? a[i]: max;
        total += a[i];
    }

    printf("\n >> so lon nhat : %d", max);
    printf("\n >> so nho nhat : %d", min);
    printf("\n >> gia tri binh quan : %.2f \n", 1.0*total/10);
}