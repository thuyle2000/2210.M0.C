#include <stdio.h>
#include <stdlib.h>

//in ra so lon nhat giua 3 so bat ky
int main(){
    system("cls");

    int a,b,c;
    printf(">> vui long nhap 3 so nguyen bat ky: ");
    scanf("%d%d%d", &a, &b, &c);

    int max=(a > b) ?  a  : b;
    max = (max > c) ? max : c;

    printf("So lon nhat [%d, %d, %d] = %d \n", a,b,c,max);
}