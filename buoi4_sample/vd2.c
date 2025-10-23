#include "stdio.h"

int main(){

    int a = 0, b = 0, tam = 0;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    if(a > b){
        tam = a;
        a = b;
        b = tam;
    }

    printf("Gia tri cua a va b la: %d, %d", a, b);

    return 0;
}