#include <stdio.h>
#include <stdlib.h>

//demo kieu du lieu con tro (pointer)
int main(){
    system("cls");

    printf("*** Demo Pointer *** \n");
    int a;
    float b;
    char c;
    char hoten[31];

    printf(" >> nhap 1 so nguyen : ");
    scanf("%d", &a);

    printf(" >> nhap 1 so thuc : ");
    scanf("%f", &b);

    fflush(stdin);
    printf(" >> nhap 1 ky tu bat ky : ");
    scanf("%c", &c);

    fflush(stdin);
    printf(" >> nhap ho va ten cua ban: ");
    scanf("%[^\n]",hoten);

    printf("\n a= %d, b=%f, c=%c \n" , a, b,c);
    printf(" hoten = %s \n", hoten);
}