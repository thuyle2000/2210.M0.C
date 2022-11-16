#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// demo ve lap trinh mang cau truc : QL danh sach cac sinh vien, tim sv co diem cao nhat

// 1. dinh nghia cau truc STUDENT
struct STUDENT
{
    char id[11], name[31];
    int mark;
};

// dinh nghia them ten moi cho kieu du lieu [struct STUDENT] la [cautrucSV]
typedef struct STUDENT cautrucSV;

int main()
{
    system("cls");

    int n;
    while (1 == 1)
    {
        printf(" vui long nhap so luong sv can quan ly [3-10]: ");
        scanf("%d", &n);
        if (n >= 3 && n <= 10)
        {
            break;
        }
    }

    // 2. khai bao bien mang [ds] chua duoc n-sinh vien
    cautrucSV ds[n]; // tuong duong khai bao struct STUDENT ds[n];

    // 3. nhap du lieu chi tiet cho n-sinh vien
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\n >> nhap du lieu cua sv thu [%d]: \n", i + 1);
        printf(" id: ");
        gets(ds[i].id);
        printf(" ho ten: ");
        gets(ds[i].name);
        printf(" diem KQ: ");
        scanf("%d", &ds[i].mark);
    }

    // 4. in danh sach sinh vien
    printf("\n *** Danh sach sinh vien *** \n");
    for (int i = 0; i < n; i++)
    {
        printf("%-8s %-20s %5d \n", ds[i].id, ds[i].name, ds[i].mark);
    }

    // 5. sap xep ds theo thu tu giam dan cua cot diem thi
    cautrucSV temp; // tuong duong cach khai bao struct STUDENT temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if (ds[i].mark < ds[k].mark)
            {
                // hoan doi du lieu tren 2 dong i va k
                temp = ds[i];
                ds[i] = ds[k];
                ds[k] = temp;
            }
        }
    }

    // 6. in danh sach sinh vien sau khi sap xep diem
    printf("\n\n *** Danh sach sinh vien sau khi xep thu tu *** \n");
    for (int i = 0; i < n; i++)
    {
        printf("%-8s %-20s %5d \n", ds[i].id, ds[i].name, ds[i].mark);
    }


   // 6. in danh sach sinh vien top 1
    int max = ds[0].mark;
    
    printf("\n\n *** Danh sach sinh vien top 1 *** \n");
    for (int i = 0; i < n; i++)
    {
        if(ds[i].mark != max){
            break;
        }
        
        printf("%-8s %-20s %5d \n", ds[i].id, ds[i].name, ds[i].mark);
    }
}
