#include "stdio.h"

int main(){

    // Nhập vào chiều dài và rộng, in ra diện tích hình chữ nhật.

    int chieuDai = 0, chieuRong = 0;
    printf("Nhap chieu dai: ");
    scanf("%d", &chieuDai);
    printf("Nhap chieu rong: ");
    scanf("%d", &chieuRong);

    printf("Dien tich hinh chu nhat la: %d", chieuDai * chieuRong);


    return 0;
}