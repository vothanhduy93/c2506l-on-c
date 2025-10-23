#include "stdio.h"

int main(){


    int a = 0, b = 0;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    if(a == b){
        printf("So a bang so b");
    }else{
        printf("So a khac so b");
    }

    return 0;
}