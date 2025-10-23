#include "stdio.h"
#include "conio.h"

int main(){
    char ten[20];
    printf("Nhap vao ten cua ban: ");
    fgets(ten, sizeof(ten), stdin);

    printf("Ten cua ban la: %s", ten);
    getch();
    return 0;
}