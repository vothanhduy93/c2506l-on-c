#include "stdio.h"
#include "conio.h"

int main(){

    // Tinh dien tich hinh tron = PI * r * r

    float r = 0, s = 0;
    const float PI = 3.14; // const = constant = hang so

    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    s = PI * r * r;

    printf("Dien tich hinh tron la: %.2f", s);

    getch();

    return 0;
}