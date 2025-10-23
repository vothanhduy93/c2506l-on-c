#include "stdio.h"

int main(){
    int a = 0;
    printf("Nhap vao so nguyen bat ky: ");
    scanf("%d", &a);

    printf("So nguyen ban nhap tang them 1 la: %d", ++a);
    return 0;
}