#include <stdio.h>
int main(){
    int a,b;
    a=b=10;

    printf("a= %d, b= %d \n", a, b);
    
    printf("a++ = %d, b--= %d \n", a++, b--);
    printf("a= %d, b= %d \n", a, b);

    printf("++a = %d, --b= %d \n", ++a, --b);
    printf("a= %d, b= %d \n", a, b);

}