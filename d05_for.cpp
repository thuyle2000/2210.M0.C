#include <stdio.h>
#include <stdlib.h>

//demo vong lap FOR 
int main(){
    system("cls");

    //vong lap FOR : in ra 10 cau thong bao 'xin chao qui khach'
    for (int i = 0; i < 10; i++)
    {
        printf("\n %2d. Xin chao qui khach !", i+1);
    }

    for (int i = 10; i > 0; i--)
    {
        printf("\n\t %2d. Chuc quy khach ngon mieng !", i);
    }   
}