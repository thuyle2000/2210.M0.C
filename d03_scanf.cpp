#include <stdlib.h>
#include <stdio.h>

int main(){   
    system("cls"); //xoa man hinh

    int a, b;
    float x, y;
    char hoten[31]; // chuoi ky tu, toi da 30 ky tu chu.
    char diaChi[31];

    //nhap du lieu
    printf("nhap so nguyen thu 1: ");
    scanf("%d", &a);

    printf("nhap so nguyen thu 2: ");
    scanf("%d", &b);    

    printf("nhap 2 so thuc: ");
    scanf("%f %f", &x, &y);

    fflush(stdin);  // xoa bo dem ban phim

    printf("nhap ho ten: ");
    scanf("%[^\n]", hoten);

    fflush(stdin);  // xoa bo dem ban phim
    printf("nhap dia chi: ");
    scanf("%[^\n]", diaChi);
    

    //xuat du lieu
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
    printf("Dia chi: %s \n", diaChi);

    
}