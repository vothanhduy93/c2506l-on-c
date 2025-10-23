#include "stdio.h"

int main(){

    // Nhập vào năm sinh, in ra tuổi hiện tại.


    int namSinh = 0;

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    printf("Tuoi hien tai cua ban la: %d", 2025 - namSinh);


    return 0;
}