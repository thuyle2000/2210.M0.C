#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
chuong trinh demo ve lap trinh mang chua cac chuoi ky tu
    - nhap ds ten sinh vien.
    - sap xep theo thu tu a-z
    - in ra danh sach
*/
int main(){
    system("cls");

    int n;

    //1. nhap tong so phan tu
    while(1==1){
        printf(" vui long nhap so luong sv [3-10]: ");
        scanf("%d", &n);
        if(n>=3 && n<=10){
            break;
        }
        printf(" >> so luong ko hop le. vui long nhap lai !\n");
    }

    //2. xong khi nhap xong gia tri cua n, khai bao mang ds[] chua ten cua n-sinh vien, chieu dai toi ta cua ho ten la 30 ky tu. 
    char ds[n][31]; 

    //vong lap FOR, nhap ho ten cua n-ban sinh vien => ds[]
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf(">> nhap ho ten cua sv thu %d: ", i+1);
        gets(ds[i]);
    }

    //3. sau khi nhap du lieu xong, in ra bang ds ten sinh vien
    printf("\n *** Danh sach ho ten sinh vien \n");
    for (int i = 0; i < n; i++)
    {
        puts(ds[i]);    //printf("%s\n", ds[i]);
    }

    //4. sap xep lai lai bang ten theo thu tu tu a-z
    char temp[31]; // bien trung gian de hoan doi gia tri cua 2 pt trong thuat toan sap xep
    for (int i = 0; i < n-1; i++)
    {
        for (int k = i+1; k< n; k++)
        {
            if(strcmp(ds[i], ds[k])>0){
                strcpy(temp, ds[i]);
                strcpy(ds[i], ds[k]);
                strcpy(ds[k], temp);
            }
        }        
    }

    //3. sau khi sap xep du lieu xong, in ra bang ds ten sinh vien
    printf("\n *** Danh sach ho ten sinh vien - theo thu tu a-z \n");
    for (int i = 0; i < n; i++)
    {
        puts(ds[i]);    
    }
    
}