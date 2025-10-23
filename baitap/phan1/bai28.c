#include "stdio.h"

int main(){

    // Nhập vào một ký tự, in ra ký tự liền sau trong bảng chữ cái.

    char kyTu;
    printf("Nhap vao ky tu bat ky: ");
    scanf("%c", &kyTu);

    printf("Ky tu lien sau ky tu %c la: %c", kyTu, kyTu + 1);

    return 0;
}