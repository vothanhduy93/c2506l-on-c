#include "stdio.h"

int main(){

    // Nhập vào số giờ và phút, in ra tổng số phút.

    int soGio = 0, soPhut = 0;
    printf("Nhap so gio: ");
    scanf("%d", &soGio);
    printf("Nhap so phut: ");
    scanf("%d", &soPhut);

    printf("Tong so phut la: %d", soPhut + (soGio * 60));

    return 0;
}