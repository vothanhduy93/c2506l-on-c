#include "stdio.h"

int main(){

    // Nhập vào một số nguyên, in ra ký tự tương ứng trong bảng ASCII.


    int a = 0;
    printf("Nhap vao so nguyen bat ky: ");
    scanf("%d", &a);

    if(a < 0){
        printf("So ban nhap khong hop le!");
    }else{
        printf("Ky tu tuong ung voi so %d trong bang ASCII la: %c", a, a);
    }


    return 0;
}