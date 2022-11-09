#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    
    int x, y;
    printf("nhap so x: ");
    scanf("%d", &x);
    printf("nhap so y: ");
    scanf("%d", &y);

    if(x<2000 || x>3000){
        printf(" >> x = %d \n", x);
    }
    else{
        printf(" >> x ko hop le ! \n");
    }

    if(y>=100 && y<=500){
        printf(" >> y = %d \n", y);
    }
    else{
        printf(" >> y ko hop le ! \n");
    }
}