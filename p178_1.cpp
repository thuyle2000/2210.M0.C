#include <stdio.h>
#include <stdlib.h>

//chuong trinh in ten cua nguoi su dung 
int main(){
    char name[31];  //chuoi co toi da 30 ky tu
    int age;

    printf("nhap ho ten: ");
    gets(name);

    printf("nhap tuoi: ");
    scanf("%d", &age);

    for (int i = 0; i < age; i++)
    {
        printf("Hello, %s \n", name);
    }
    

}