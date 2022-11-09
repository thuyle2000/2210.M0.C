#include <stdio.h>
#include <stdlib.h>

//chuong trinh demo ve lap trinh mang chua cac so nguyen
int main(){
    system("cls");

    //khai bao mang so nguyen a, co 10 phan tu
    int a[10];

    //gan gia tri cho 10 phan tu cua mang a
    a[0]=a[1]=a[2]=a[3]=a[4]=a[5]=a[6]=a[7]=a[8]=a[9]=100;

    //in ra noi dung cua mang a[]
    printf("Noi dung mang a[]: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

}