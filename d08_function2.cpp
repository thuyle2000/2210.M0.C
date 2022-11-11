#include <stdio.h>
#include <stdlib.h>
// chuong trinh c demo cach lap trinh ham co tham so, ko co gia tri tra ve

void squarer(int n); // khai bao prototype cua ham squarer(int)

int main()
{
    system("cls");

    // goi ham square de tinh va in ra binh phuong cua 1 so bat ky
    int x;
    printf(" nhap 1 so nguyen bat ky: ");
    scanf("%d", &x);
    squarer(x);     //tham so thuc te (x) la 1 bien
    squarer(x+3);   //tham so thuc te (x+3) la 1 bieu thuc
    squarer(12);    //tham so thuc te (12) la 1 hang gia tri
}

/*
    Dinh nghia chuong trinh ham tinh binh phuong cua 1 so nguyen bat ky
    ten ham : squarer
    gia tri tra ve : ko co -> void
    tham so : co 1 tham so nguyen n (int n): n la tham so hinh thuc (formal argument)
*/
void squarer(int n)
{
    long r = n * n;
    printf(" binh phuong cua [%d] = [%d] \n", n, r);
}