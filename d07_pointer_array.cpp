#include <stdio.h>
#include <stdlib.h>

// demo pointer ket hop voi array
int main()
{
    system("cls");
    printf(" DEMO POINTER - ARRAY \n");

    // khai bao mang so nguyen a[]
    int a[5] = {100, 300, 200, 400, 800};

    // khai bao con tro pa, chua dia chi cua mang a
    int *pa = a;

    // in ra day so nguyen trong mang a
    printf("\n Day so   (array): ");
    for (int i = 0; i < 5; i++)
    {
        printf("%4d ", a[i]);
    }

    // in ra day so nguyen trong mang a theo con tro pa
    printf("\n Day so (pointer): ");
    for (int i = 0; i < 5; i++)
    {
        printf("%4d ", *(pa + i));
    }

    // in ra day so nguyen trong mang a theo con tro pa, theo thu tu nguoc tu phan tu cuoi -> dau
    printf("\n Day so (pointer - reverse): ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%4d ", *(pa + i));
    }

    printf("\n Day so (pointer - reverse): ");
    pa = &a[4];
    for (int i = 0; i < 5; i++)
    {
        printf("%4d ", *(pa)--);
    }
}