#include <stdio.h>
#include <stdlib.h>

int main(){   
    system("cls"); //xoa man hinh

    int a =12, b=12345;
    float x=12.123456, y=1467;

    char hoten[31]="Tran Anh Tien"; // chuoi ky tu, toi da 30 ky tu chu.

    printf("\n >> gia tri cua 2 so nguyen a va b: \n");
    printf("%d \n", a);
    printf("%d \n", b);

    printf("[%10d]  [%-10d]\n", a, a);
    printf("[%10d]  [%-10d]\n", b, b);   

    printf("\n >> gia tri cua 2 so thuc x va y: \n");
    printf("%f \n", x);
    printf("%f \n", y);
    printf("[%10.2f] \n", x);
    printf("[%10.2f] \n", y);
    printf("[%010.2f] \n", x);
    printf("[%010.2f] \n", y);

    printf("\nHo ten: %s \n", hoten);
}