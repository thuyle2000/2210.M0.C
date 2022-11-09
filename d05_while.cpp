#include <stdio.h>
#include <stdlib.h>

//demo vong lap WHILE 
int main(){
    system("cls");

    //vong lap WHILE : in ra 10 cau thong bao 'xin chao qui khach'
    int i=0;
    while(i<10){
        printf("\n %2d. Xin chao qui khach !", ++i);
    }

    while(i>0)
    {
        printf("\n\t %2d. Chuc quy khach ngon mieng !", i--);
    }   
}