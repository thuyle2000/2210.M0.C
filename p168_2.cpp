#include <stdio.h>
#include <stdlib.h>

//chuong trinh in ra tong cac so le giua 2 so n1 va n2
// vi du:  n1=3, n2=9 => sum=3+5+7+9
//         n1=4, n2=9 => sum=5+7+9
//         n1=4, n2=12 => sum=5+7+9+11
//         n1=12, n2=4 => sum=5+7+9+11
int main(){

    system("cls");
    int n1, n2, sum=0;

    printf("nhap so thu 1: "); scanf("%d", &n1);
    printf("nhap so thu 2: "); scanf("%d", &n2);
    int start = (n1<n2) ? n1 : n2;
    int stop = (n2>n1) ? n2: n1;

    if(start%2 == 0){
        start++;
    }

    for (int i = start; i <= stop; i+=2)
    {   
        printf("%d + ", i);
        sum += i;
    }
    
    printf("\n Tong cac so le giua [%d] va [%d] = %d \n",n1, n2, sum);
}