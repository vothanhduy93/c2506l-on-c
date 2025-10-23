#include "stdio.h"

int main(){

    int giaVe = 0;
    int tuoi = 0;
    printf("Nhap tuoi cua ban: ");
    scanf("%d", &tuoi);
    printf("Nhap gia ve: ");
    scanf("%d", &giaVe);

    if(tuoi > 15){
        printf("Khong duoc giam gia ve! \n");
    }else if(tuoi >= 10 && tuoi <= 15){
        giaVe = giaVe - giaVe * 0.15;
    }else if(tuoi >= 6 && tuoi <= 10){
        giaVe = giaVe - giaVe * 0.3;
    }else if(tuoi < 6){
        giaVe = giaVe - giaVe * 0.5;
    }

    printf("Gia ve cua ban la: %d", giaVe);

    return 0;
}