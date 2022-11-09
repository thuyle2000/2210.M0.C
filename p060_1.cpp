#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// #include <curses.h>  //macOS - system("clear")

int main(){
    system("cls");  // lenh xoa man hinh, phai include <stdlib.h> 

    printf("vui long nhap 1 so nguyen: ");
    int n;
    scanf("%d", &n);

    printf("binh phuong cua %d = %d \n",n, n*n );
    printf("binh phuong cua %d = %.0f \n",n, pow(n,2) );

}