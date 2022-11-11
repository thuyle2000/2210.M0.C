#include <stdio.h>
#include <stdlib.h>
// chuong trinh c demo cach lap trinh ham co tham so va co gia tri tra ve

long squarer(int n); // khai bao prototype cua ham: long squarer(int)
char mess[31] = "Demo Function";    // bien toan cuc

int main()
{
    system("cls");

    // goi ham square de tinh va in ra binh phuong cua 1 so bat ky
    int x;
    printf(" nhap 1 so nguyen bat ky: ");
    scanf("%d", &x);
    
    printf("binh phuong [%d] = [%d]\n",x, squarer(x)); 
    printf("binh phuong [%d] = [%d]\n",x+3, squarer(x+3));   
    printf("binh phuong [%d] = [%d]\n",12, squarer(12));      
}

/*
    Dinh nghia chuong trinh ham tinh binh phuong cua 1 so nguyen bat ky
    ten ham : squarer
    gia tri tra ve : so nguyen long
    tham so : co 1 tham so nguyen n (int n): n la tham so hinh thuc (formal argument)
*/
long squarer(int n)
{
    printf("\n %s \n", mess);
    long r = n * n;
    return r;
}