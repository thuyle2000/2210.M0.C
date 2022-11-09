#include <stdio.h>
#include <stdlib.h>

//chuong trinh nhap day so nguyen, sap xep thu tu va in ra man hinh
int main(){
    system("cls");

    //1. nhap so phan tu cua mang
    int n;
    while(1==1){
        printf(" >> nhap so phan tu [3-10]: ");
        scanf("%d", &n);
        if(n>=3 && n<=10){
            break;
        }
        printf(" Loi: so luong ko hop le. Vui long nhap lai !\n");
    }

    int dayso[n];   //khai bao mang [dayso] co chua n-so nguyen

    //2. vong lap FOR, nhap gia tri cho n phan tu cua mang [dayso]
    for (int i = 0; i < n; i++)
    {
        printf(" nhap phan tu thu %d: ", i+1);
        scanf("%d", &dayso[i]);
    }

    //3. in day so vua nhap ra man hinh
    printf("\n >> Day so vua nhap: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%6d ", dayso[i]);
    }

    //4. sap xep lai day so theo thu tu tang dan
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int k = i+1; k < n; k++)
        {
            if(dayso[i] > dayso[k]){
                temp = dayso[i];
                dayso[i] = dayso[k];
                dayso[k] = temp;
            }
        }        
    }
    
    //5. in lai day so vua moi sap xep ra man hinh
    printf("\n\n >> Day so sau khi sap xep: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%6d ", dayso[i]);
    }   
    
}