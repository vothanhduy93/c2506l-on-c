#include "stdio.h"

int main(){

    // Nhập vào số giây, in ra định dạng giờ:phút:giây.

    int tongSoGiay = 0, soGio = 0, soPhut = 0, soGiay = 0;
    printf("Nhap so giay: ");
    scanf("%d", &tongSoGiay);

    if(tongSoGiay < 0){
        printf("So giay khong duoc phep la so am");
    }

    soGio = tongSoGiay / 3600;
    soPhut = (tongSoGiay % 3600) / 60;
    soGiay = tongSoGiay % 60;

    printf("%02d:%02d:%02d", soGio, soPhut, soGiay);


    return 0;
}