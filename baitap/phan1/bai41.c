#include "stdio.h"

int main(){


    // Nhập vào một ký tự thường, in ra ký tự hoa tương ứng.
    // A - Z: 65-90
    // a - z: 97-122

    char kyTuThuong;
    printf("Nhap vao ky tu thuong: ");
    scanf("%c", &kyTuThuong);

    if(kyTuThuong >= 97 && kyTuThuong <= 122){
        printf("Ky tu viet hoa cua %c la: %c", kyTuThuong, kyTuThuong - 32);
    }else{
        printf("Du lieu nhap vao khong hop le");
    }

    return 0;
}