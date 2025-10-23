#include "stdio.h"

int main(){

    float a = 0, b = 0;
    printf("Nhap so a: ");
    scanf("%f", &a);

    printf("Nhap so b: ");
    scanf("%f", &b);


    printf("Ket qua cua a/b la: %.2f", a / b);

    return 0;
}