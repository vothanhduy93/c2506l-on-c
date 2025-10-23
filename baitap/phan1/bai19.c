#include "stdio.h"

int main(){


    int a = 0, b = 0;
    int phanDu = 0;
    
    printf("Nhap vao so a: ");
    scanf("%d", &a);
    printf("Nhap vao so b: ");
    scanf("%d", &b);

    phanDu = a % b;

    printf("Gia tri cua a/b la: %d", phanDu);


    return 0;
}