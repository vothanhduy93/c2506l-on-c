#include "stdio.h"

int main(){

    // Nhập vào 2 số nguyên, in ra số lớn hơn.

    int a = 0, b = 0, max = 0;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);

    if(a > b){
        max = a;
    }else if(a < b){
        max = b;
    }else{
        printf("So a bang so b");
    }

    printf("So lon nhat la: %d", max);

    return 0;
}