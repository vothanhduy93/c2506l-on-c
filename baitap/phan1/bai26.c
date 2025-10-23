#include "stdio.h"

int main(){

    // Nhập vào một ký tự, in ra mã ASCII của ký tự đó.

    char kyTu;
    printf("Nhap vao ky tu bat ky: ");
    scanf("%c", &kyTu);

    printf("Ma ASCII cua ky tu %c la: %d", kyTu, kyTu);

    return 0;
}