#include <stdio.h>
#include <stdlib.h>

//demo pointer voi chuc nang cap phat bo nho dong
int main(){
    system("cls");

    int n;
    while(1==1){
        printf(" >> nhap tong so phan tu cua day so [5->20]: ");
        scanf("%d", &n);
        if(n>=5 && n<=20){
            break;
        }
        printf(" >> Loi:  so lieu ko hop le !\n");
    }

    // con tro p, chua dia chi vung nho dc cap phat co the chua n-so nguyen
    int *p = (int *) malloc(n * sizeof(int));

    if(p != NULL){
        //yc cap phat bo nho thanh cong
        printf(" nhap vao day so nguyen : \n");
        for (int i = 0; i < n; i++)
        {
            printf(">> phan thu thu [%d]: ", i+1);
            scanf("%d", p+i);
        }

        printf("\n\n Day so vua nhap:        ");
        for (int i = 0; i < n; i++)
        {
            printf(" %4d", *(p+i));     //printf(" %4d", p[i]);
        }

        //sap xep day so theo thu tu giam dan
        int temp;
        for (int i = 0; i < n-1; i++)
        {
            for (int k = i+1;  k < n; k++)
            {
                if( *(p+i) < *(p+k) ){
                    temp = *(p+i);
                    *(p+i) = *(p+k);
                    *(p+k) = temp;
                }
            }
        }

        printf("\n\n Day so sau khi sap xep: ");
        for (int i = 0; i < n; i++)
        {
            printf(" %4d", *(p+i));     //printf(" %4d", p[i]);
        }
        
    }

}