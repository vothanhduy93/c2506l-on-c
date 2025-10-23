#include "stdio.h"

int main(){

// Nhập vào hai số nguyên, in ra thương (chia thực).

    float a = 0, b = 0;
    
    printf("Nhap vao so a: ");
    scanf("%f", &a);
    printf("Nhap vao so b: ");
    scanf("%f", &b);

    printf("Gia tri cua a/b la: %.2f", a/b);


    return 0;
}