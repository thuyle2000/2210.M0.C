#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//chuong trinh demo ve lap trinh mang chua cac chuoi ky tu: chua ds ten sinh vien.
int main(){
    system("cls");

    int n;

    while(1==1){
        printf(" vui long nhap so luong sv [3-10]: ");
        scanf("%d", &n);
        if(n>=3 && n<=10){
            break;
        }
        printf(" >> so luong ko hop le. vui long nhap lai !\n");
    }

    //xong khi nhap xong gia tri cua n, khai bao mang ds[] chua ten cua n-sinh vien, chieu dai toi ta cua ho ten la 30 ky tu. 
    char ds[n][31]; 

    //vong lap FOR, nhap ho ten cua n-ban sinh vien => ds[]
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf(">> nhap ho ten cua sv thu %d: ", i+1);
        gets(ds[i]);
    }

    //sau khi nhap du lieu xong, in ra bang ds ten sinh vien
    printf("\n *** Danh sach ho ten sinh vien \n");
    for (int i = 0; i < n; i++)
    {
        puts(ds[i]);    //printf("%s\n", ds[i]);
    }
}