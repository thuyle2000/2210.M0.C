#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve lap trinh mang cau truc : QL danh sach cac sinh vien 

//1. dinh nghia cau truc STUDENT
struct STUDENT
{
    char id[11], name[31];
    int yob;
};

int main(){
    system("cls");

    int n;
    while(1==1){
        printf(" vui long nhap so luong sv can quan ly [3-10]: ");
        scanf("%d", &n);
        if(n>=3 && n<=10){
            break;
        }
    }

    //2. khai bao bien mang [ds] chua duoc n-sinh vien
    struct STUDENT ds[n];

    //3. nhap du lieu chi tiet cho n-sinh vien
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\n >> nhap du lieu cua sv thu [%d]: \n", i+1);
        printf(" id: "); gets(ds[i].id);
        printf(" ho ten: "); gets(ds[i].name);
        printf(" nam sinh: "); scanf("%d", &ds[i].yob);
    }
    
    //4. in danh sach sinh vien
    printf("\n *** Danh sach sinh vien *** \n");
    for (int i = 0; i < n; i++)
    {
        printf("%-8s %-20s %5d \n", ds[i].id, ds[i].name, ds[i].yob);
    }
    
    //5. sap xep ds theo thu tu ho ten
    struct STUDENT temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int k = i+1; k < n; k++)
        {
            if(strcmp(ds[i].name, ds[k].name)>0){
                //hoan doi du lieu tren 2 dong i va k
                temp = ds[i];
                ds[i] = ds[k];
                ds[k] = temp;
            }
        }
    }

    //6. in danh sach sinh vien sau khi sap xep ho ten
    printf("\n\n *** Danh sach sinh vien sau khi xep thu tu *** \n");
    for (int i = 0; i < n; i++)
    {
        printf("%-8s %-20s %5d \n", ds[i].id, ds[i].name, ds[i].yob);
    }

}
