#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo dem so nguyen am trong 1 chuoi ky tu
int main(){
    system("cls");
    printf(" ***  Chuong trinh dem so nguyen am *** \n\n");

    char s[81];  //chuoi s co the chua toi da 80 ky tu
    char vowels[] = "aeiouAEIOU"; // chuoi vowels chua cac nguyen am
    
    printf(" >> nhap chuoi ky tu bat ky :");
    gets(s);

    int n = strlen(s);  // bien n chua tong so ky tu trong chuoi s
    int cnt = 0;        // bien cnt chua so nguyen am trong chuoi s

    for (int i = 0; i < n; i++)
    {
        if(strchr(vowels, s[i])!=NULL){
            cnt++;
            printf(" %c ", s[i]);
        }
    }
    printf("\n Tong so nguyen am trong chuoi [%s]: %d.\n", s, cnt);
    

}