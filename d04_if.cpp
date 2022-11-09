#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    char ch;
    printf("vui long nhap 1 ky tu bat ky: ");
    scanf("%c", &ch);

    //kiem tra ky tu moi nhap co phai la ky tu so ko?
    if(ch>='0' && ch<='9'){
        printf("[%c] la ky tu so \n", ch);
    }
    
    printf("Ket thuc chuong trinh \n");
}