#include "stdio.h"

int main(){


    char c;
    printf("Nhap vao ky tu c: ");
    scanf("%c", &c);

    if(c >= 'a' && c <= 'z'){
        c = c - 32;
        printf("Ky tu viet hoa la: %c", c);
    }else if(c >= 'A' && c <= 'Z'){
        c = c + 32;
        printf("Ky tu viet thuong la: %c", c);
    }else if(c >= '0' && c <= '9'){
        printf("Ky tu chung ta vua nhap la so: %c", c);
    }else{
        printf("Ky tu chung ta da nhap la: %c", c);
    }

    return 0;
}