#include "stdio.h"

int main(){

    int tuoi;
    float diem;

    printf("Ban bao nhieu tuoi: ");
    scanf("%d", &tuoi);
    printf("Nhap diem: ");
    scanf("%f", &diem);
    
    printf("Ban %d tuoi, diem so cua ban la: %.1f", tuoi, diem);

    return 0;
}