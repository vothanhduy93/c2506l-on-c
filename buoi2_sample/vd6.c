#include <stdio.h>

int main()
{
    // Comment có dấu tiếng Việt vẫn OK

    char hoTen[20];

    printf("Nhap ho ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);

    printf("Ten cua ban la: %s", hoTen);

    return 0;
}
