#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ct demo cach lap trinh 1 cau truc chua ben trong cau truc khac:
//ct quan ly danh sach cac nhan vien. 
//  moi nv bao gom cac thuoc tinh: id, ho ten, luong cb, ngay vao lam cty (dd/mm/yyyy)
//  => ngay vao lam cty la 1 cau truc con (dd/mm/yyyy)

//1. dinh nghia cau truc con chua gia tri ngay/ thang/nam
struct DATE
{
    int dd, mm, yyyy;   //dd: ngay, mm: thang, yyyy: nam
};

//2. dinh nghia cau truc nhan vien, co chua cau truc DATE
struct EMPLOYEE
{
    char ID[11], name[31];
    int salary;
    struct DATE joinDate;
};

int main(){

    system("cls");
    int n;
    while(1==1){
        printf(" nhap so luong NV muon quan ly [3-10] : ");
        scanf("%d", &n);
        if(n>=3 && n<=10){
            break;
        }
        printf(" >> Loi: du lieu ko hop le. Vui long nhap lai ! \n");
    }


    //3. khai bao bien mang ds chua n-nhanvien
    struct EMPLOYEE ds[n];


    //4. vong lap nhap thong tin cua n-nhan vien
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf(" *** nhap thong tin cua nhan vien thu [%d] *** \n", i+1);
        printf("  - nhap ma so: "); gets(ds[i].ID);
        printf("  - nhap ho ten: "); gets(ds[i].name);
        printf("  - nhap luong cb: "); scanf("%d", & ds[i].salary);
       
        printf("  - ngay gia nhap cong ty: \n");
        printf("      ngay [1-31]: "); scanf("%d", &ds[i].joinDate.dd);
        printf("      thang [1-12]: "); scanf("%d", &ds[i].joinDate.mm);
        printf("      nam [>1980]: "); scanf("%d", &ds[i].joinDate.yyyy);
    }
      
    //5. vong lap in danh sach nhan vien
    printf("\n\n *** DANH SACH NHAN VIEN ***\n");
    for (int i = 0; i < n; i++)
    {
        printf("%-6s | %-20s | %8d | %02d-%02d-%d \n", ds[i].ID, ds[i].name,ds[i].salary, ds[i].joinDate.dd, ds[i].joinDate.mm, ds[i].joinDate.yyyy);
    }
    

}




