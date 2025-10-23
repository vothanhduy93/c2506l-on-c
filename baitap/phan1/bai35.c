#include "stdio.h"

int main(){

    // Nhập vào họ, tên đệm, tên → in ra đầy đủ.

    char ho[30], tenDem[30], ten[30];
    printf("Nhap ho: ");
    fgets(ho, sizeof(ho), stdin);
    printf("Nhap ten dem: ");
    fgets(tenDem, sizeof(tenDem), stdin);
    printf("Nhap ten: ");
    fgets(ten, sizeof(ten), stdin);

    printf("Ho ten day du la: %s %s %s", ho, tenDem, ten);

    return 0;
}