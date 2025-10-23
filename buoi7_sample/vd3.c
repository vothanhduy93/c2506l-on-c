#include "stdio.h"

int main()
{

    // Viết chương trình nhập vào tháng và in ra quý. (tháng 1 -> quý 1, tháng 10 -> quý 4). Thông báo cho người dùng biết nếu tháng nhập vào không >=1 và <=12.
    int thang;
    printf("Nhap thang: ");
    scanf("%d", &thang);

    switch (thang)
    {
    case 1:
    case 2:
    case 3:
        printf("Quy 1");
        break;
    case 4:
    case 5:
    case 6:
        printf("Quy 2");
        break;
    case 7:
    case 8:
    case 9:
        printf("Quy 3");
        break;
    case 10:
    case 11:
    case 12:
        printf("Quy 4");
    }
    return 0;
}