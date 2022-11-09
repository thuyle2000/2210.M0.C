#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");

    int diem;
    printf("nhap diem KQ: ");
    scanf("%d", &diem);

    //phan loai diem KQ => dua ra thong bao phu hop
    if(diem<0 || diem>100){
        //nhap sai roi !!!
        printf(">> Diem nhap ko hop le !!! \n");
    }
    else if(diem>=90){
        printf(">> Xuat sac ! \n");
    }
    else if(diem>=80){
        printf(">> Gioi ! \n");
    }
    else if(diem>=65){
        printf(">> Kha ! \n");
    }
    else if(diem>=40){
        printf(">> Trung binh !\n");
    }
    else{
        printf(">> Ko dat yeu cau ! \n");
    }


}