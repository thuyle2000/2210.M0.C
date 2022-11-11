#include <stdio.h>
#include <stdlib.h>
//chuong trinh c demo cach lap trinh ham ko co tham so, ko co gia tri tra ve

void squarer();  //khai bao prototype cua ham squarer()

int main(){
    system("cls");

    //goi ham square de tinh va in ra binh phuong cua 1 so bat ky
    squarer();
} 

/*
    Dinh nghia chuong trinh ham tinh binh phuong cua 1 so nguyen bat ky
    ten ham : squarer
    gia tri tra ve : ko co -> void
    tham so : ko co -> ()
*/
void squarer(){
    int n;
    printf(" nhap 1 so nguyen bat ky: ");
    scanf("%d", &n);
    long r = n*n;
    printf(" binh phuong cua [%d] = [%d] \n", n, r);
}